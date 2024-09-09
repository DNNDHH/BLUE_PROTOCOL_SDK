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
	 * Function BP_ProjectilePath.BP_ProjectilePath_C.UserConstructionScript
	 */
	struct ABP_ProjectilePath_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ProjectilePath.BP_ProjectilePath_C.RecalcSplinePath
	 */
	struct ABP_ProjectilePath_C_RecalcSplinePath_Params
	{	};

	/**
	 * Function BP_ProjectilePath.BP_ProjectilePath_C.InitBuildSplineMesh
	 */
	struct ABP_ProjectilePath_C_InitBuildSplineMesh_Params
	{	};

	/**
	 * Function BP_ProjectilePath.BP_ProjectilePath_C.ExecuteUbergraph_BP_ProjectilePath
	 */
	struct ABP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SLGA[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
