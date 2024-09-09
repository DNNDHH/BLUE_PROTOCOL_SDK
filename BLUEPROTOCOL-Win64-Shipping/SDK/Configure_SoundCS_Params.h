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
	 * Function Configure_SoundCS.Configure_SoundCS_C.ApplyChatSoundData
	 */
	struct UConfigure_SoundCS_C_ApplyChatSoundData_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.ApplyMainSoundSaveData
	 */
	struct UConfigure_SoundCS_C_ApplyMainSoundSaveData_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.PlayVoice
	 */
	struct UConfigure_SoundCS_C_PlayVoice_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2
	 */
	struct UConfigure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.PreConstruct
	 */
	struct UConfigure_SoundCS_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.Construct
	 */
	struct UConfigure_SoundCS_C_Construct_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.OnChangeValue
	 */
	struct UConfigure_SoundCS_C_OnChangeValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Volume;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Mute;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.ApplySaveData
	 */
	struct UConfigure_SoundCS_C_ApplySaveData_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.OnRequestPlaySound
	 */
	struct UConfigure_SoundCS_C_OnRequestPlaySound_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.OnPlaySound
	 */
	struct UConfigure_SoundCS_C_OnPlaySound_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfigure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.LoadVoiceAsset
	 */
	struct UConfigure_SoundCS_C_LoadVoiceAsset_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.Destruct
	 */
	struct UConfigure_SoundCS_C_Destruct_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.Open
	 */
	struct UConfigure_SoundCS_C_Open_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.Close
	 */
	struct UConfigure_SoundCS_C_Close_Params
	{	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.SetTitleMode
	 */
	struct UConfigure_SoundCS_C_SetTitleMode_Params
	{
	public:
		bool                                                       bTitle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Configure_SoundCS.Configure_SoundCS_C.ExecuteUbergraph_Configure_SoundCS
	 */
	struct UConfigure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
