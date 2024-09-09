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
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetData
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_SetData_Params
	{
	public:
		class FString                                              InURL;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_44ZR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        InCanvasPanel;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Construct
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_Construct_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Reset
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_Reset_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationText
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_SetLocationText_Params
	{
	public:
		class FString                                              LocationName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ZoneId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ContentId;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0030(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationFollowerUIVisible
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible_Params
	{
	public:
		bool                                                       IsShowPlayerLocationUI;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetOtherLocationText
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_SetOtherLocationText_Params
	{
	public:
		bool                                                       Inactive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLCA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              LocationName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ZoneId;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ContentId;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0038(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ErrorDataSet
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_ErrorDataSet_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ExecuteUbergraph_CommunicateSettingMenu_HeaderBG
	 */
	struct UCommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EMZU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
