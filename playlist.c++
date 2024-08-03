#include<iostream>
using namespace std;

class Node {
public:
    int duration;
    string title;
    string artist;
    Node* next;

    Node(string title, string artist, int duration) {
        this->artist=artist;
        this->title=title;
        this->duration=duration;
        this->next=NULL;
    }
};

class Playlist {
public:
    Node* head;

    Playlist() {
        this->head=NULL;
    }

    ~Playlist() {
        Node* current=head;
        while (current !=NULL) {
            Node* next=current->next;
            delete current;
            current=next;
        }
        head=NULL;
    }

    void addSong() {
        string title, artist;
        int duration;
        cout<<"Title of the song: ";
        cin>>title;
        cout<<"Artist of the song: ";
        cin>>artist;
        cout<<"Duration of the song (seconds): ";
        cin>>duration;
        Node* newNode=new Node(title, artist, duration);

        if (head==NULL) {
            head=newNode;
        }
        else {
            Node* temp=head;
            while (temp->next !=NULL) {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cout<<"Song added successfully"<<endl;
    }

    void addSongAtBeginning() {
        string title, artist;
        int duration;
        cout<<"Title of the song: ";
        cin>>title;
        cout<<"Artist of the song: ";
        cin>>artist;
        cout<<"Duration of the song (seconds): ";
        cin>>duration;
        Node* newNode=new Node(title, artist, duration);

        if (head==NULL) {
            head=newNode;
        }
        else {
            newNode->next=head;
            head=newNode;
        }
        cout<<"Song added successfully"<<endl;
    }

    void addSongAfter() {
        string title, artist, existingTitle;
        int duration;
        cout<<"Song should be inserted after ";
        cin>>existingTitle;
        cout<<"Title of the song: ";
        cin>>title;
        cout<<"Artist of the song: ";
        cin>>artist;
        cout<<"Duration of the song (seconds): ";
        cin>>duration;

        Node* temp=head;
        while (temp !=NULL) {
            if (temp->title==existingTitle) {
                Node* newNode=new Node(title, artist, duration);
                newNode->next=temp->next;
                temp->next=newNode;
                cout<<title<<" song added after "<<existingTitle<<endl;
                return;
            }
            temp=temp->next;
        }
        cout<<"Song not found in the playlist."<<endl;
    }

    void deleteSong() {
        string title;
        cout<<"Enter the title of the song to be deleted: ";
        cin>>title;

        Node* temp=head;
        Node* prev=NULL;

        while (temp !=NULL && temp->title !=title) {
            prev=temp;
            temp=temp->next;
        }

        if (temp==NULL) {
            cout<<"Song not found in the playlist."<<endl;
            return;
        }

        if (prev==NULL) {
            // If the song to be deleted is the first node
            head=temp->next;
        }
        else {
            prev->next=temp->next;
        }

        delete temp;
        cout<<title<<" song deleted successfully"<<endl;
    }

    void displayPlaylist() {
        cout<<"Current playlist: "<<endl;
        Node* current=head;
        while (current !=NULL) {
            cout<<current->title<<" by "<<current->artist<<" "<<current->duration<<" seconds"<<endl;
            current=current->next;
        }
    }
};

int main() {
    int choice;
    Playlist playlist;

    while (true) {
        cout<<endl;
        cout<<"Playlist Options:"<<endl;
        cout<<"1. Add song at the end"<<endl;
        cout<<"2. Add song at the beginning"<<endl;
        cout<<"3. Insert after a song"<<endl;
        cout<<"4. Delete a song"<<endl;
        cout<<"5. Display the playlist"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<endl<<"Enter an instruction: ";
        cin>>choice;
        cout<<endl;

        if (choice==6) {
            break;
        }

        switch (choice) {
        case 1:
            playlist.addSong();
            break;
        case 2:
            playlist.addSongAtBeginning();
            break;
        case 3:
            playlist.addSongAfter();
            break;
        case 4:
            playlist.deleteSong();
            break;
        case 5:
            playlist.displayPlaylist();
            break;
        }
    }

    return 0;
}
