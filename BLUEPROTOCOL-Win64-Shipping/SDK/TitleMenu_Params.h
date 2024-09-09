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
	 * Function TitleMenu.TitleMenu_C.GetBanFinishedAt
	 */
	struct UTitleMenu_C_GetBanFinishedAt_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.SetEffectEnable
	 */
	struct UTitleMenu_C_SetEffectEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.IsCharaSelectStart
	 */
	struct UTitleMenu_C_IsCharaSelectStart_Params
	{
	public:
		bool                                                       CharaSelect;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_95GQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleMenu.TitleMenu_C.ClearCache
	 */
	struct UTitleMenu_C_ClearCache_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.GetNewCharacterId
	 */
	struct UTitleMenu_C_GetNewCharacterId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.HasFromOption
	 */
	struct UTitleMenu_C_HasFromOption_Params
	{
	public:
		class FString                                              CheckString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NK5F[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnLoaded_136303394FB780B732D94AA171FCCCE2
	 */
	struct UTitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnLoaded_E8315409430BF09E1DB899BAE01D7ABD
	 */
	struct UTitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72
	 */
	struct UTitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.InitConfig
	 */
	struct UTitleMenu_C_InitConfig_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.InitStartMenu
	 */
	struct UTitleMenu_C_InitStartMenu_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.SetButtonFocus
	 */
	struct UTitleMenu_C_SetButtonFocus_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnInitializeOption_Selected
	 */
	struct UTitleMenu_C_OnInitializeOption_Selected_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnReOpenOption
	 */
	struct UTitleMenu_C_OnReOpenOption_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OpenOption KeyConfig
	 */
	struct UTitleMenu_C_OpenOptionKeyConfig_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.Construct
	 */
	struct UTitleMenu_C_Construct_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.Destruct
	 */
	struct UTitleMenu_C_Destruct_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    listIndex;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReturnDisconnect;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    listIndex;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FW7B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FriendCharacterId;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnLoginFailure
	 */
	struct UTitleMenu_C_OnLoginFailure_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.InitCharaSelect
	 */
	struct UTitleMenu_C_InitCharaSelect_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.ResetGameLoadStatus
	 */
	struct UTitleMenu_C_ResetGameLoadStatus_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnFailedConnectServer
	 */
	struct UTitleMenu_C_OnFailedConnectServer_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnComebackCharaCreate
	 */
	struct UTitleMenu_C_OnComebackCharaCreate_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UTitleMenu_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.OnFinishedDialog
	 */
	struct UTitleMenu_C_OnFinishedDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.OperationPossible
	 */
	struct UTitleMenu_C_OperationPossible_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitleMenu_C_BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2
	 */
	struct UTitleMenu_C_WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.Init
	 */
	struct UTitleMenu_C_Init_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.LoadEffectActor
	 */
	struct UTitleMenu_C_LoadEffectActor_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.LoadCharaLayer
	 */
	struct UTitleMenu_C_LoadCharaLayer_Params
	{	};

	/**
	 * Function TitleMenu.TitleMenu_C.SetupCharaLayer
	 */
	struct UTitleMenu_C_SetupCharaLayer_Params
	{
	public:
		class UClass*                                              InSBTitleMenuCharaLayer;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleMenu.TitleMenu_C.ExecuteUbergraph_TitleMenu
	 */
	struct UTitleMenu_C_ExecuteUbergraph_TitleMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0AFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
