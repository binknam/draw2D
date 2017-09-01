#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
	stem0 = ofPoint(300, 100);
	stem1 = ofPoint(300, 270);
	stem2 = ofPoint(300, 300);
	stem3 = ofPoint(300, 400);
	leftLeaf = ofPoint(200, 220);
	rightLeaf = ofPoint(400, 220);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255); //Set white background
	ofSetColor(0, 0, 0); //Set black color
	ofCircle(stem0, 40); //Blossom
	ofLine(stem0, stem3); //Stem
	ofTriangle(stem1, stem2, leftLeaf); //Left leaf
	ofTriangle(stem1, stem2, rightLeaf); //Right leaf
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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