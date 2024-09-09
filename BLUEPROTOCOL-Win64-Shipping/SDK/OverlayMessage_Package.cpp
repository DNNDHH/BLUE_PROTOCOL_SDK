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
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.SetResultForButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBButton_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::SetResultForButton(class USBButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.SetResultForButton");
		
		UOverlayMessage_C_SetResultForButton_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.ChangeCurrentButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::ChangeCurrentButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.ChangeCurrentButton");
		
		UOverlayMessage_C_ChangeCurrentButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnRepeat_Left
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::OnRepeat_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnRepeat_Left");
		
		UOverlayMessage_C_OnRepeat_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnRepeat_Right
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::OnRepeat_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnRepeat_Right");
		
		UOverlayMessage_C_OnRepeat_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnPress_Ok
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::OnPress_Ok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnPress_Ok");
		
		UOverlayMessage_C_OnPress_Ok_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.StartMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::StartMessageDialog(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.StartMessageDialog");
		
		UOverlayMessage_C_StartMessageDialog_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.StartYesNoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::StartYesNoDialog(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.StartYesNoDialog");
		
		UOverlayMessage_C_StartYesNoDialog_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature");
		
		UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.Construct
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.Construct");
		
		UOverlayMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.HideDialog
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::HideDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.HideDialog");
		
		UOverlayMessage_C_HideDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.Destruct");
		
		UOverlayMessage_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnAnimationFinished");
		
		UOverlayMessage_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UOverlayMessage_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnPress_Cancel");
		
		UOverlayMessage_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.ExecuteUbergraph_OverlayMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::ExecuteUbergraph_OverlayMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.ExecuteUbergraph_OverlayMessage");
		
		UOverlayMessage_C_ExecuteUbergraph_OverlayMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverlayMessage.OverlayMessage_C.OnHide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverlayMessage_C::OnHide__DelegateSignature(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverlayMessage.OverlayMessage_C.OnHide__DelegateSignature");
		
		UOverlayMessage_C_OnHide__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverlayMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlayMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverlayMessage.OverlayMessage_C");
		return ptr;
	}

}


