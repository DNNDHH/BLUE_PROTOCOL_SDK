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
	 * Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Update
	 */
	struct UMyCharaMenu_LvSync_C_Update_Params
	{
	public:
		bool                                                       bIsLevelSync;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6HT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Construct
	 */
	struct UMyCharaMenu_LvSync_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.ExecuteUbergraph_MyCharaMenu_LvSync
	 */
	struct UMyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
