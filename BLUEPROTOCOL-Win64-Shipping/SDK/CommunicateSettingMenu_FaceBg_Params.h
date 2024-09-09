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
	 * Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.Construct
	 */
	struct UCommunicateSettingMenu_FaceBg_C_Construct_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.SetData
	 */
	struct UCommunicateSettingMenu_FaceBg_C_SetData_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4GC7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ResetData
	 */
	struct UCommunicateSettingMenu_FaceBg_C_ResetData_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBg
	 */
	struct UCommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
