/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDebugButton_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.SetText");
		
		UDebugButton_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UDebugButton_C::GetText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.GetText");
		
		UDebugButton_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.CalcChildMenuPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugButton_C::CalcChildMenuPosition(struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.CalcChildMenuPosition");
		
		UDebugButton_C_CalcChildMenuPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.SetButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugButton_C::SetButtonFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.SetButtonFocus");
		
		UDebugButton_C_SetButtonFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.ResetSettings
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::ResetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.ResetSettings");
		
		UDebugButton_C_ResetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.SaveSettings
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::SaveSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.SaveSettings");
		
		UDebugButton_C_SaveSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.LoadSettings
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::LoadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.LoadSettings");
		
		UDebugButton_C_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnLoaded_445800FD409A4EBB9ABB87B77ED6E644
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugButton_C::OnLoaded_445800FD409A4EBB9ABB87B77ED6E644(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnLoaded_445800FD409A4EBB9ABB87B77ED6E644");
		
		UDebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnLoaded_495F650B48822E342FF6D9A376B5922E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugButton_C::OnLoaded_495F650B48822E342FF6D9A376B5922E(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnLoaded_495F650B48822E342FF6D9A376B5922E");
		
		UDebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugButton_C::OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9");
		
		UDebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPressSetPlayerLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LocationStr                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDebugButton_C::OnPressSetPlayerLocation(const class FString& LocationStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPressSetPlayerLocation");
		
		UDebugButton_C_OnPressSetPlayerLocation_Params params {};
		params.LocationStr = LocationStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_PlayDemo
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_PlayDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_PlayDemo");
		
		UDebugButton_C_OnPress_PlayDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_ReplayDemo
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_ReplayDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_ReplayDemo");
		
		UDebugButton_C_OnPress_ReplayDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_CommandMenu_FullscreenMode
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_CommandMenu_FullscreenMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_CommandMenu_FullscreenMode");
		
		UDebugButton_C_OnPress_CommandMenu_FullscreenMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_CommandMenu_WindowMode
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_CommandMenu_WindowMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_CommandMenu_WindowMode");
		
		UDebugButton_C_OnPress_CommandMenu_WindowMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_SetResolution
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_SetResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_SetResolution");
		
		UDebugButton_C_OnPress_SetResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ToTargetPoint
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_FastTravelMenu_ToTargetPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ToTargetPoint");
		
		UDebugButton_C_OnPress_FastTravelMenu_ToTargetPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ReturnToCity
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_FastTravelMenu_ReturnToCity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ReturnToCity");
		
		UDebugButton_C_OnPress_FastTravelMenu_ReturnToCity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToNoon
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_TimeSettingMenuToNoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToNoon");
		
		UDebugButton_C_OnPress_TimeSettingMenuToNoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToEvening
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPress_TimeSettingMenuToEvening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToEvening");
		
		UDebugButton_C_OnPress_TimeSettingMenuToEvening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.PushButton
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::PushButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.PushButton");
		
		UDebugButton_C_PushButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.Construct");
		
		UDebugButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnGetFocus");
		
		UDebugButton_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnLostFocus");
		
		UDebugButton_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.ExecFunc
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::ExecFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.ExecFunc");
		
		UDebugButton_C_ExecFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature");
		
		UDebugButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void UDebugButton_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.OnPressOk");
		
		UDebugButton_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.ExecuteUbergraph_DebugButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugButton_C::ExecuteUbergraph_DebugButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.ExecuteUbergraph_DebugButton");
		
		UDebugButton_C_ExecuteUbergraph_DebugButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugButton.DebugButton_C.EventDispatcher_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugButton_C::EventDispatcher_OnClicked__DelegateSignature(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugButton.DebugButton_C.EventDispatcher_OnClicked__DelegateSignature");
		
		UDebugButton_C_EventDispatcher_OnClicked__DelegateSignature_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugButton.DebugButton_C");
		return ptr;
	}

}


