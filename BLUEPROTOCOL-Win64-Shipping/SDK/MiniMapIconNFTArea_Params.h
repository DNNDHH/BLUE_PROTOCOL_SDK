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
	 * Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.SetNFTAreaActor
	 */
	struct UMiniMapIconNFTArea_C_SetNFTAreaActor_Params
	{
	public:
		class ABP_NFTArea_C*                                       NFTAreaActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.ExecuteUbergraph_MiniMapIconNFTArea
	 */
	struct UMiniMapIconNFTArea_C_ExecuteUbergraph_MiniMapIconNFTArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04SV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
