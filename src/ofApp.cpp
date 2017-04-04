#include "ofApp.h"
using namespace std;
//--------------------------------------------------------------
void ofApp::setup()
{
random_device rd;//used to seed the engine eng1 below
mt19937 eng1(rd());//this engine produces different output every time
mt19937 eng2(1337);//this engine produces the same output every time

int min = 0;
int xmax =1200;
int ymax =970;

uniform_int_distribution<>uniformx(min, xmax);
uniform_int_distribution<>uniformy(min, ymax);
  
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
for (int i=0; i<20;i++)
{
  X.push_back(uniformx(eng1));
} //{500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
for (int t=0; t<20;t++)
{
  Y.push_back(uniformy(eng1));
}
// = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
