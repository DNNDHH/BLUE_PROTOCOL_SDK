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
	 * Function DebugButton.DebugButton_C.SetText
	 */
	struct UDebugButton_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugButton.DebugButton_C.GetText
	 */
	struct UDebugButton_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DebugButton.DebugButton_C.CalcChildMenuPosition
	 */
	struct UDebugButton_C_CalcChildMenuPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButton.DebugButton_C.SetButtonFocus
	 */
	struct UDebugButton_C_SetButtonFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8A0C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugButton.DebugButton_C.ResetSettings
	 */
	struct UDebugButton_C_ResetSettings_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.SaveSettings
	 */
	struct UDebugButton_C_SaveSettings_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.LoadSettings
	 */
	struct UDebugButton_C_LoadSettings_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnLoaded_445800FD409A4EBB9ABB87B77ED6E644
	 */
	struct UDebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButton.DebugButton_C.OnLoaded_495F650B48822E342FF6D9A376B5922E
	 */
	struct UDebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButton.DebugButton_C.OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9
	 */
	struct UDebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButton.DebugButton_C.OnPressSetPlayerLocation
	 */
	struct UDebugButton_C_OnPressSetPlayerLocation_Params
	{
	public:
		class FString                                              LocationStr;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_PlayDemo
	 */
	struct UDebugButton_C_OnPress_PlayDemo_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_ReplayDemo
	 */
	struct UDebugButton_C_OnPress_ReplayDemo_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_CommandMenu_FullscreenMode
	 */
	struct UDebugButton_C_OnPress_CommandMenu_FullscreenMode_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_CommandMenu_WindowMode
	 */
	struct UDebugButton_C_OnPress_CommandMenu_WindowMode_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_SetResolution
	 */
	struct UDebugButton_C_OnPress_SetResolution_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ToTargetPoint
	 */
	struct UDebugButton_C_OnPress_FastTravelMenu_ToTargetPoint_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ReturnToCity
	 */
	struct UDebugButton_C_OnPress_FastTravelMenu_ReturnToCity_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToNoon
	 */
	struct UDebugButton_C_OnPress_TimeSettingMenuToNoon_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToEvening
	 */
	struct UDebugButton_C_OnPress_TimeSettingMenuToEvening_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.PushButton
	 */
	struct UDebugButton_C_PushButton_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.Construct
	 */
	struct UDebugButton_C_Construct_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnGetFocus
	 */
	struct UDebugButton_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnLostFocus
	 */
	struct UDebugButton_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.ExecFunc
	 */
	struct UDebugButton_C_ExecFunc_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.OnPressOk
	 */
	struct UDebugButton_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugButton.DebugButton_C.ExecuteUbergraph_DebugButton
	 */
	struct UDebugButton_C_ExecuteUbergraph_DebugButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9P1I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugButton.DebugButton_C.EventDispatcher_OnClicked__DelegateSignature
	 */
	struct UDebugButton_C_EventDispatcher_OnClicked__DelegateSignature_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
