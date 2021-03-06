/*
 * Copyright (c) 2018,2021 Amir Czwink (amir130@hotmail.de)
 *
 * This file is part of ACFSLib.
 *
 * ACFSLib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ACFSLib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ACFSLib.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <StdXX.hpp>
using namespace StdXX;
using namespace StdXX::FileSystem;

class COH_SGA_FileSystem : public ContainerFileSystem
{
public:
	//Constructor
	inline COH_SGA_FileSystem(const Format *format, const Path &fileSystemPath) : ContainerFileSystem(fileSystemPath)
	{
		if (!this->containerInputStream.IsNull())
			this->ReadFileHeaders();
	}

	//Methods
	void Flush() override;

private:
	//Methods
	void ReadFileHeaders();
};