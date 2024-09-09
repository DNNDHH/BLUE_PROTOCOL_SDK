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
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.UpdateMailRestrictions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aleat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Warning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::UpdateMailRestrictions(bool Aleat, bool Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.UpdateMailRestrictions");
		
		UCommandMenu_MenuItem_C_UpdateMailRestrictions_Params params {};
		params.Aleat = Aleat;
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.IsActiveExcramation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::IsActiveExcramation(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.IsActiveExcramation");
		
		UCommandMenu_MenuItem_C_IsActiveExcramation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::SetBtn(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtn");
		
		UCommandMenu_MenuItem_C_SetBtn_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtnTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::SetBtnTextColor(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtnTextColor");
		
		UCommandMenu_MenuItem_C_SetBtnTextColor_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.GetMenuType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_MenuItem_C::GetMenuType(ESBCommandMenuType* MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.GetMenuType");
		
		UCommandMenu_MenuItem_C_GetMenuType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuType != nullptr)
			*MenuType = params.MenuType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.Play Btn Anim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::PlayBtnAnim(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.Play Btn Anim");
		
		UCommandMenu_MenuItem_C_PlayBtnAnim_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");
		
		UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.PreConstruct");
		
		UCommandMenu_MenuItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ShowExcramation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_MenuItem_C::ShowExcramation(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ShowExcramation");
		
		UCommandMenu_MenuItem_C_ShowExcramation_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ExecuteUbergraph_CommandMenu_MenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_MenuItem_C::ExecuteUbergraph_CommandMenu_MenuItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ExecuteUbergraph_CommandMenu_MenuItem");
		
		UCommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommandMenu_MenuItem_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_MenuItem_C::OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.OnSelect__DelegateSignature");
		
		UCommandMenu_MenuItem_C_OnSelect__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_MenuItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_MenuItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_MenuItem.CommandMenu_MenuItem_C");
		return ptr;
	}

}


