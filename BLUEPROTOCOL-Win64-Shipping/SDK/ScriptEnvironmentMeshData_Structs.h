#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ScriptEnvironmentMeshData.ScriptEnvironmentMeshData
	 * Size -> 0x0020
	 */
	struct FScriptEnvironmentMeshData
	{
	public:
		TArray<class FName>                                        MeshNames_3_D813640E431F73F43A90C5BEAC532AC7;            // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        InstancedMeshNames_7_8B89247B4863176C0137BEBE435E40A4;   // 0x0010(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
