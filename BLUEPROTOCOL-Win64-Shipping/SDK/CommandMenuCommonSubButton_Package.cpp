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
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBookmarkEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButton_C::SetBookmarkEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBookmarkEnable");
		
		UCommandMenuCommonSubButton_C_SetBookmarkEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommandMenuCommonSubButton_C::SetBtnText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnText");
		
		UCommandMenuCommonSubButton_C_SetBtnText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      BtnType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButton_C::SetBtnImage(class UImage* BtnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnImage");
		
		UCommandMenuCommonSubButton_C_SetBtnImage_Params params {};
		params.BtnType = BtnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButton_C::SetEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetEnable");
		
		UCommandMenuCommonSubButton_C_SetEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButton_C::SetMenuFocus(bool InFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Set Menu Focus");
		
		UCommandMenuCommonSubButton_C_SetMenuFocus_Params params {};
		params.InFocus = InFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.PreConstruct");
		
		UCommandMenuCommonSubButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Construct");
		
		UCommandMenuCommonSubButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.EventInAnimation
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::EventInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.EventInAnimation");
		
		UCommandMenuCommonSubButton_C_EventInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExcramationIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenuCommonSubButton_C::ExcramationIconVisible(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExcramationIconVisible");
		
		UCommandMenuCommonSubButton_C_ExcramationIconVisible_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.AbortAnimAndCollapse
	 * 		Flags  -> ()
	 */
	void UCommandMenuCommonSubButton_C::AbortAnimAndCollapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.AbortAnimAndCollapse");
		
		UCommandMenuCommonSubButton_C_AbortAnimAndCollapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExecuteUbergraph_CommandMenuCommonSubButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButton_C::ExecuteUbergraph_CommandMenuCommonSubButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExecuteUbergraph_CommandMenuCommonSubButton");
		
		UCommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenuCommonSubButton_C::OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.OnClick__DelegateSignature");
		
		UCommandMenuCommonSubButton_C_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenuCommonSubButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenuCommonSubButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenuCommonSubButton.CommandMenuCommonSubButton_C");
		return ptr;
	}

}


