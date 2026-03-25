//m5lab1.cpp
//MYKAYLA LEWIS
// 3/24/26
#include <iostream>
#include "m5lab1.h"
using namespace std;
 
// main() goes here
int main() {
    int choice;
    // game starts here
    cout << "ANIMAL SHELTER" << endl << endl;
    cout << "You are about your day when you spot something in the corner of your eye. Something seemingly soft and fuzzy, more of a burnt-orange color..." << endl;
    cout << "\"Is that...?\"" << " you wonder." << "\"...a cat? \"" << " It seems like this in a pet store, as you back a few paces." << endl;
    cout << "Do you: " << endl;
    cout << "1. Go in?" << endl;
    cout << "2. Keep walking?" << endl;
    cout << "> ";
    cin >> choice;
    if (1 == choice) {
        go_shop();
    }
    else if (2 == choice) {
        walk();
    }
    else{
        cout << "Not a choice." << endl;
    }
    cout << "*THE END*" << endl << endl;
    return 0;
}
void go_shop() {
    int choice;
    cout << "You walk into the store, the door's bell jingles merrily above you which prompts the yips and mews of both puppies and kittens. " << endl;
    cout << "\"Welcome, welcome!\"" << " smiles a young girl in forest green attire. Her clothing littered with white fur but that didn't seem to bother her."  << endl;
    cout << "\"Welcome to Pawtopia Kennels! Are we looking at cats today or dogs?\"" << endl;
    cout << "Do you choose: " << endl;
    cout << "1. A dog." << endl;
    cout << "2. A cat." << endl;
    cout << "> " << endl;
    cin >> choice;
    if (1 == choice) {
        dog();
    }
    else if (2 == choice) {
        cat();
    }
}
void walk() {
    cout << "You scoff. You don't have much money for a pet anyways. You skip foward, going about your day." << endl;
}
void dog() {
    int choice;
    cout << "\"A dog? Gotcha! Right this way!\""<< " She leads way to a room futher into the kennel. Metal cages surrounds you, and barks of many dogs of various ages, rushing to the face of their cages." << endl;
    cout << "So many dogs... You wish you could take them all home with you, but given how tight money is currently, it'd be best to only get one dog. The walking comes to a halt and the girl turns to you." << endl;
    cout << "\"So as far as your preference...\" " << " she begins," << " \" Would you prefer a puppy, adult, or senior dog? The puppies are always grabbed up first. The adults and especially the seniors struggle to find a forever home.\"" << endl;
    cout << "Can you care for a: " << endl;
    cout << "1. Puppy" << endl;
    cout << "2. Adult" << endl;
    cout << "3. Senior" << endl;
    cout << "> " << endl;
    cin >> choice;  
    if (1 == choice) {
        puppy();
    }
    else if (2 == choice) {
        d_adult();
    }
    else if (3 == choice) {
        d_senior();
    }
}
void puppy() {
    cout << "\"So, a puppy?\"" << " She pauses," << " \"Anyone sticks out to you?" << "You look around, your eyes ultimately laying on a small golden boy. He lets out a yip of excitement noticing you, stomping gallantly your way. You wonder if this is the puppy of your dreams as you tossed him up into the air. Maybe... maybe it was. Maybe you two were a match." << endl;
    cout << "\" This one... \"" << " you began,"  << " \"This one is the one.\"" << " The puppy yaps as if he knew what those words meant, and the store employee smiles. Once you paid, you leave the shop, the puppy's tail wagging wildly in your arms. This is where your and your new friend's journey begins." << endl;
}
void d_adult() {
    cout << "\"An adult, huh?\"" << " She pauses," << " \"Anyone sticks out to you?" << "You look around, a stout brown figure stood out to you. It seems like a nervous girl, swaying her tail gently with flattened ears. She appears sweet but you figured given she's an adult and more anxious then the lively puppies then she'd have a harder time getting adopted." << endl;
    cout << "You shimmy through the puppies, keeping your body low to show her you mean no harm. She steps foward and bows her head for a pat. Her fur was smooth and soft, much like a mink blanket, you just couldn't stop petting her." << endl;
    cout << "\" This one... \"" << " you began,"  << " \"This one is the one.\"" << " The dog eyes you, and the store employee smiles. Once you paid, you leave the shop, the dog's tail wagged meekly behind her. This is where your and your new friend's journey begins." << endl;
}
void d_senior() {
    cout << "She smiles, seeming thankful for your choice of choosing an elder. Your eyes scans over the sea of dogs until you notice a slender black figure. You make your way over to the dog who seems too old to even be bothered, he still however let you rub his grey muzzle after stiffing your hands." << endl;
    cout << "\"This one.\" you say standing up. \"I want him.\" The worker's smile deepens as she nods. After you had paid and left the door, your new best friend trods lazily behind you." << endl;
}
void cat() {
    int choice;
    cout << "\"A cat... Right! Follow me!\"" << " She paces foward, leading way to a door and glancing back at you before opening the door." << "\" Pst... pst... pst... pst...!\"" << " she whispers to the cats and kittens, blocking them from streaking out with her shoes. When she signals you, you slip between the gap." << endl;
    cout << "Cats and kittens alike surrounds you, meowing eagerly and stretching their paws on your legs. The worker interrupts, gesturing over the cats," << " \"As you can tell we have many cats. Have any idea what life stage you'd like to have your cat at.\"" << endl;
    cout << "Do you pick a:" << endl;
    cout << "1. Kitten" << endl;
    cout << "2. Adult" << endl;
    cout << "3. Senior" << endl;
    cout << "> " << endl;
    cin >> choice;
    if (1 == choice) {
        kitten();
    }
    else if (2 == choice) {
        c_adult();
    }
    else if (3 == choice) {
        c_senior();
    }
}
void kitten() {
    cout << "\"So, a kitten?\"" << " She pauses," << " \"Anyone sticks out to you?" << "You look around, your eyes ultimately laying on a small orange tabby. He lets out a mew of excitement noticing you, stomping gallantly your way. You wonder if this is the kitten of your dreams as you tossed him up into the air. Maybe... maybe it was. Maybe you two were a match." << endl;
    cout << "\" This one... \"" << " you began,"  << " \"This one is the one.\"" << " The kitten mews as if he knew what those words meant, and the store employee smiles. Once you paid, you leave the shop, the kitten runs frantically in the \"just adopted\" box. This is where your and your new friend's journey begins." << endl;
}
void c_adult() {
    cout << "\"An adult, huh?\"" << " She pauses," << " \"Anyone sticks out to you?" << "You look around, a fat grey figure stood out to you. It seems like a nervous girl, swaying her tail gently with flattened ears. She appears sweet but you figured given she's an adult and more anxious then the lively puppies then she'd have a harder time getting adopted." << endl;
    cout << "You shimmy through the cats, keeping your body low to show her you mean no harm. She paces back uncertainly, but ultimately caves in by stepping foward and letting you pet her. Her fur was smooth and soft, much like a mink blanket, you just couldn't stop petting her." << endl;
    cout << "\" This one... \"" << " you began,"  << " \"This one is the one.\"" << " The cat eyes you, and the store employee smiles. Once you paid, you leave the shop, the cat sits calmly in its temporary box kennel. This is where your and your new friend's journey begins." << endl;
}
void c_senior() {
    cout << "She smiles, seeming thankful for your choice of choosing an elder. Your eyes scans over the sea of cats until you notice a scrawny white figure. You make your way over to the cat who seems too old to even be bothered, he still however let you rub his head after stiffing your hands." << endl;
    cout << "\"This one.\" you say standing up. \"I want him.\" The worker's smile deepens as she nods. After you had paid and left the door, your new best friend hardly makes any noise in the temporary box kennel" << endl;
}