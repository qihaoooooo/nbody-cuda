#pragma once

#include "inc_filesystem.h"
#include "float3.h"

struct VTKWriter {

	VTKWriter(bool del_old_dirs = true);

	void write_pos(const float3* d_pos, const int n);

private:

	fs::path outdir;
	int frame;

};