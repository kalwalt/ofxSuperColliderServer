#pragma once

#include "ofMain.h"

class ofxSuperColliderServer
{
public:
	static void init(int port = 57110, int samplerate = 44100, string plugin_dir = "plugins", string synthdef_dir = "synthdef");
};