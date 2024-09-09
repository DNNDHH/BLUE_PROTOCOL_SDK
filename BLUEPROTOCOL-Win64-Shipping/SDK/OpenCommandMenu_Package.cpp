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
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.UpdateKeyText
	 * 		Flags  -> ()
	 */
	void UOpenCommandMenu_C::UpdateKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.UpdateKeyText");
		
		UOpenCommandMenu_C_UpdateKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UOpenCommandMenu_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.UpdateVisibility");
		
		UOpenCommandMenu_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOpenCommandMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.OnAnimationFinished");
		
		UOpenCommandMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.OnChangeOpenCommandMenuFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOpenCommandMenu_C::OnChangeOpenCommandMenuFlag(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.OnChangeOpenCommandMenuFlag");
		
		UOpenCommandMenu_C_OnChangeOpenCommandMenuFlag_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.OnUpdateKeyEvent
	 * 		Flags  -> ()
	 */
	void UOpenCommandMenu_C::OnUpdateKeyEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.OnUpdateKeyEvent");
		
		UOpenCommandMenu_C_OnUpdateKeyEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOpenCommandMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.Destruct");
		
		UOpenCommandMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UOpenCommandMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.Construct");
		
		UOpenCommandMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOpenCommandMenu_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UOpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOpenCommandMenu_C::OnPhotoModeEnter(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Enter");
		
		UOpenCommandMenu_C_OnPhotoModeEnter_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Leave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOpenCommandMenu_C::OnPhotoModeLeave(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Leave");
		
		UOpenCommandMenu_C_OnPhotoModeLeave_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenCommandMenu.OpenCommandMenu_C.ExecuteUbergraph_OpenCommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOpenCommandMenu_C::ExecuteUbergraph_OpenCommandMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenCommandMenu.OpenCommandMenu_C.ExecuteUbergraph_OpenCommandMenu");
		
		UOpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenCommandMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenCommandMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OpenCommandMenu.OpenCommandMenu_C");
		return ptr;
	}

}


