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
	 * Function KeyGuide2.KeyGuide2_C.ExecChangeKeyGuide
	 */
	struct UKeyGuide2_C_ExecChangeKeyGuide_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.GetPlayerClassKeyConfigData
	 */
	struct UKeyGuide2_C_GetPlayerClassKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         ReturnValue;                                             // 0x0000(0x01D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetIsMount
	 */
	struct UKeyGuide2_C_SetIsMount_Params
	{
	public:
		bool                                                       RetValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetKeyConfig_OfflineBattle
	 */
	struct UKeyGuide2_C_SetKeyConfig_OfflineBattle_Params
	{
	public:
		bool                                                       RetValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetKeyConfig_Cty
	 */
	struct UKeyGuide2_C_SetKeyConfig_Cty_Params
	{
	public:
		bool                                                       RetValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9WTO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetCheerfulItem
	 */
	struct UKeyGuide2_C_SetCheerfulItem_Params
	{
	public:
		bool                                                       RetValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VMEN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetKeyConfig
	 */
	struct UKeyGuide2_C_SetKeyConfig_Params
	{
	public:
		bool                                                       RetValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5M4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.IsKeyGuideAuto
	 */
	struct UKeyGuide2_C_IsKeyGuideAuto_Params
	{
	public:
		bool                                                       bAuto;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.Construct
	 */
	struct UKeyGuide2_C_Construct_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.ChangeKeyGuide
	 */
	struct UKeyGuide2_C_ChangeKeyGuide_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibility
	 */
	struct UKeyGuide2_C_ChangeKeyGuideVisibility_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnUpdateKeyConfig
	 */
	struct UKeyGuide2_C_OnUpdateKeyConfig_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnRetryKeyGuideType
	 */
	struct UKeyGuide2_C_OnRetryKeyGuideType_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.PreConstruct
	 */
	struct UKeyGuide2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnAdventurerRankDelegate_Event
	 */
	struct UKeyGuide2_C_OnAdventurerRankDelegate_Event_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibilityAuto
	 */
	struct UKeyGuide2_C_ChangeKeyGuideVisibilityAuto_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.SetEditMode
	 */
	struct UKeyGuide2_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.UnbindAdventurerRankDelegate
	 */
	struct UKeyGuide2_C_UnbindAdventurerRankDelegate_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.Destruct
	 */
	struct UKeyGuide2_C_Destruct_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.UnbindUpdateKeyConfigDelegate
	 */
	struct UKeyGuide2_C_UnbindUpdateKeyConfigDelegate_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.CustomEvent_1
	 */
	struct UKeyGuide2_C_CustomEvent_1_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnChangePad
	 */
	struct UKeyGuide2_C_OnChangePad_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.Bind Pad Skin Change
	 */
	struct UKeyGuide2_C_BindPadSkinChange_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.Unbind Pad Skin Change
	 */
	struct UKeyGuide2_C_UnbindPadSkinChange_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.InitKeyGuideSettingTimerEvent
	 */
	struct UKeyGuide2_C_InitKeyGuideSettingTimerEvent_Params
	{	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.ExecuteUbergraph_KeyGuide2
	 */
	struct UKeyGuide2_C_ExecuteUbergraph_KeyGuide2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnCheerfulItemEvent__DelegateSignature
	 */
	struct UKeyGuide2_C_OnCheerfulItemEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsCheerfulItem;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnChangeMountEvent__DelegateSignature
	 */
	struct UKeyGuide2_C_OnChangeMountEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsMount;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide2.KeyGuide2_C.OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 */
	struct UKeyGuide2_C_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
