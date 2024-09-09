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
	 * Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.SetShortId
	 */
	struct UCommunicateSettingMenu_ShortId_C_SetShortId_Params
	{
	public:
		class FString                                              InShortId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ErrorDataSet
	 */
	struct UCommunicateSettingMenu_ShortId_C_ErrorDataSet_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ExecuteUbergraph_CommunicateSettingMenu_ShortId
	 */
	struct UCommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_245J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
