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
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetName
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_SetName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetAchievementName
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_SetAchievementName_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsResult;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ClearAchievementText
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_ClearAchievementText_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.Construct
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_Construct_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ErrorDataSet
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_ErrorDataSet_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.OnAchievementSelectWindowOpenEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_NameAndAchieve_C_OnAchievementSelectWindowOpenEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
