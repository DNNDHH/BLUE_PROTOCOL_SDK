#pragma once

 

// Package: ScriptEnvironmentMeshData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ScriptEnvironmentMeshData.ScriptEnvironmentMeshData
// 0x0020 (0x0020 - 0x0000)
struct FScriptEnvironmentMeshData final
{
public:
	TArray<class FName>                           MeshNames_3_D813640E431F73F43A90C5BEAC532AC7;      // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           InstancedMeshNames_7_8B89247B4863176C0137BEBE435E40A4; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FScriptEnvironmentMeshData) == 0x000008, "Wrong alignment on FScriptEnvironmentMeshData");
static_assert(sizeof(FScriptEnvironmentMeshData) == 0x000020, "Wrong size on FScriptEnvironmentMeshData");
static_assert(offsetof(FScriptEnvironmentMeshData, MeshNames_3_D813640E431F73F43A90C5BEAC532AC7) == 0x000000, "Member 'FScriptEnvironmentMeshData::MeshNames_3_D813640E431F73F43A90C5BEAC532AC7' has a wrong offset!");
static_assert(offsetof(FScriptEnvironmentMeshData, InstancedMeshNames_7_8B89247B4863176C0137BEBE435E40A4) == 0x000010, "Member 'FScriptEnvironmentMeshData::InstancedMeshNames_7_8B89247B4863176C0137BEBE435E40A4' has a wrong offset!");

}

