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
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogPositionType                                PositionType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::SetPosition(EDialogPositionType PositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.SetPosition");
		
		UBP_Dialog_C_SetPosition_Params params {};
		params.PositionType = PositionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.Construct");
		
		UBP_Dialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.Hide
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.Hide");
		
		UBP_Dialog_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.StartMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EDialogPositionType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnableBgBlur                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Dialog_C::StartMessageDialog(const class FText& Message, EDialogPositionType Type, bool bEnableBgBlur)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.StartMessageDialog");
		
		UBP_Dialog_C_StartMessageDialog_Params params {};
		params.Message = Message;
		params.Type = Type;
		params.bEnableBgBlur = bEnableBgBlur;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.StartYesNoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EDialogPositionType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnableBgBlur                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Dialog_C::StartYesNoDialog(const class FText& Message, EDialogPositionType Type, bool bEnableBgBlur)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.StartYesNoDialog");
		
		UBP_Dialog_C_StartYesNoDialog_Params params {};
		params.Message = Message;
		params.Type = Type;
		params.bEnableBgBlur = bEnableBgBlur;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.Destruct");
		
		UBP_Dialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.OnAnimationFinished");
		
		UBP_Dialog_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.ChangeMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Dialog_C::ChangeMessage(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.ChangeMessage");
		
		UBP_Dialog_C_ChangeMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature");
		
		UBP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature");
		
		UBP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature");
		
		UBP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.OnDestructMainWidget
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::OnDestructMainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.OnDestructMainWidget");
		
		UBP_Dialog_C_OnDestructMainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.OnPress_Cancel");
		
		UBP_Dialog_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.OnPress_Ok
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::OnPress_Ok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.OnPress_Ok");
		
		UBP_Dialog_C_OnPress_Ok_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.SetPositionType_2
	 * 		Flags  -> ()
	 */
	void UBP_Dialog_C::SetPositionType_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.SetPositionType_2");
		
		UBP_Dialog_C_SetPositionType_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.SetYesButtonClickSe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::SetYesButtonClickSe(class UAkAudioEvent* AkEvent, const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.SetYesButtonClickSe");
		
		UBP_Dialog_C_SetYesButtonClickSe_Params params {};
		params.AkEvent = AkEvent;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.SetInputBlockerMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBlock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Dialog_C::SetInputBlockerMode(bool bIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.SetInputBlockerMode");
		
		UBP_Dialog_C_SetInputBlockerMode_Params params {};
		params.bIsBlock = bIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.SetCheckBoxMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Dialog_C::SetCheckBoxMessage(bool bVisible, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.SetCheckBoxMessage");
		
		UBP_Dialog_C_SetCheckBoxMessage_Params params {};
		params.bVisible = bVisible;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Dialog_C::BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UBP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.ShowWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Dialog_C::ShowWarning(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.ShowWarning");
		
		UBP_Dialog_C_ShowWarning_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dialog.BP_Dialog_C.ExecuteUbergraph_BP_Dialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Dialog_C::ExecuteUbergraph_BP_Dialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dialog.BP_Dialog_C.ExecuteUbergraph_BP_Dialog");
		
		UBP_Dialog_C_ExecuteUbergraph_BP_Dialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Dialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Dialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Dialog.BP_Dialog_C");
		return ptr;
	}

}


