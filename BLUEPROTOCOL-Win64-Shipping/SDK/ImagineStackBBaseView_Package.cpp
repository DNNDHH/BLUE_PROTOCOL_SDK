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
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.ResetStepSendData
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::ResetStepSendData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.ResetStepSendData");
		
		UImagineStackBBaseView_C_ResetStepSendData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeHeader
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::InitializeHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeHeader");
		
		UImagineStackBBaseView_C_InitializeHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateRewardView
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::UpdateRewardView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateRewardView");
		
		UImagineStackBBaseView_C_UpdateRewardView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateLiquidMemoryView
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::UpdateLiquidMemoryView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateLiquidMemoryView");
		
		UImagineStackBBaseView_C_UpdateLiquidMemoryView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.GenerateTicketData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBStackBUseTicket>                  Tickets                                                    (Parm, OutParm)
	 */
	void UImagineStackBBaseView_C::GenerateTicketData(TArray<struct FSBStackBUseTicket>* Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.GenerateTicketData");
		
		UImagineStackBBaseView_C_GenerateTicketData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tickets != nullptr)
			*Tickets = params.Tickets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.GetMaterialUIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Uids                                                       (Parm, OutParm)
	 */
	void UImagineStackBBaseView_C::GetMaterialUIDs(TArray<class FString>* Uids)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.GetMaterialUIDs");
		
		UImagineStackBBaseView_C_GetMaterialUIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Uids != nullptr)
			*Uids = params.Uids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateExecuteView
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::UpdateExecuteView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateExecuteView");
		
		UImagineStackBBaseView_C_UpdateExecuteView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeStep
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::InitializeStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeStep");
		
		UImagineStackBBaseView_C_InitializeStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeButtons
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::InitializeButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeButtons");
		
		UImagineStackBBaseView_C_InitializeButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectImagine
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::ReselectImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectImagine");
		
		UImagineStackBBaseView_C_ReselectImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.onSelectedMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        Uids                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               UseTicket                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStackBUseTicket                          StackBTicket                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UImagineStackBBaseView_C::onSelectedMaterials(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.onSelectedMaterials");
		
		UImagineStackBBaseView_C_onSelectedMaterials_Params params {};
		params.UseTicket = UseTicket;
		params.StackBTicket = StackBTicket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Uids != nullptr)
			*Uids = params.Uids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectMaterial
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::ReselectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectMaterial");
		
		UImagineStackBBaseView_C_ReselectMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectedPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectedPerk                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineStackBBaseView_C::OnSelectedPerk(const struct FOwnItemInfo& SelectedPerk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectedPerk");
		
		UImagineStackBBaseView_C_OnSelectedPerk_Params params {};
		params.SelectedPerk = SelectedPerk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnReInit
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnReInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnReInit");
		
		UImagineStackBBaseView_C_OnReInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnTicketSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBBaseView_C::OnTicketSelected(int32_t Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnTicketSelected");
		
		UImagineStackBBaseView_C_OnTicketSelected_Params params {};
		params.Ticket = Ticket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectTicket
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::ReselectTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectTicket");
		
		UImagineStackBBaseView_C_ReselectTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep2
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OpenStep2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep2");
		
		UImagineStackBBaseView_C_OpenStep2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep3
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OpenStep3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep3");
		
		UImagineStackBBaseView_C_OpenStep3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep4
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OpenStep4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep4");
		
		UImagineStackBBaseView_C_OpenStep4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectTargetImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineStackBBaseView_C::OnSelectTargetImagine(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectTargetImagine");
		
		UImagineStackBBaseView_C_OnSelectTargetImagine_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseImagineSelectDialog
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnCloseImagineSelectDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseImagineSelectDialog");
		
		UImagineStackBBaseView_C_OnCloseImagineSelectDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnBeginSelectImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine");
		
		UImagineStackBBaseView_C_EventOnBeginSelectImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnEndSelectImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine");
		
		UImagineStackBBaseView_C_EventOnEndSelectImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Material
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnBeginSelectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Material");
		
		UImagineStackBBaseView_C_EventOnBeginSelectMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Material
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnEndSelectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Material");
		
		UImagineStackBBaseView_C_EventOnEndSelectMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectMaterialDialog
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnCloseSelectMaterialDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectMaterialDialog");
		
		UImagineStackBBaseView_C_OnCloseSelectMaterialDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine Inherit
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnBeginSelectImagineInherit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine Inherit");
		
		UImagineStackBBaseView_C_EventOnBeginSelectImagineInherit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine Inherit
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnEndSelectImagineInherit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine Inherit");
		
		UImagineStackBBaseView_C_EventOnEndSelectImagineInherit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectImagineInheritDialog
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnCloseSelectImagineInheritDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectImagineInheritDialog");
		
		UImagineStackBBaseView_C_OnCloseSelectImagineInheritDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Ticket
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnBeginSelectTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Ticket");
		
		UImagineStackBBaseView_C_EventOnBeginSelectTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Ticket
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnEndSelectTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Ticket");
		
		UImagineStackBBaseView_C_EventOnEndSelectTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectTicketDialog
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnCloseSelectTicketDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectTicketDialog");
		
		UImagineStackBBaseView_C_OnCloseSelectTicketDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Execute
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnBeginExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Execute");
		
		UImagineStackBBaseView_C_EventOnBeginExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Execute
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::EventOnEndExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Execute");
		
		UImagineStackBBaseView_C_EventOnEndExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Construct");
		
		UImagineStackBBaseView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Init
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Init");
		
		UImagineStackBBaseView_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Term
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::Term()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Term");
		
		UImagineStackBBaseView_C_Term_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Bind Imagine Stacked
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BindImagineStacked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Bind Imagine Stacked");
		
		UImagineStackBBaseView_C_BindImagineStacked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Unbind StackB Completed
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::UnbindStackBCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Unbind StackB Completed");
		
		UImagineStackBBaseView_C_UnbindStackBCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnComplete Imagine Stack B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                Imagine                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineStackBBaseView_C::OnCompleteImagineStackB(int32_t RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnComplete Imagine Stack B");
		
		UImagineStackBBaseView_C_OnCompleteImagineStackB_Params params {};
		params.RetCode = RetCode;
		params.Imagine = Imagine;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnDialog Closed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBBaseView_C::OnDialogClosed(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnDialog Closed");
		
		UImagineStackBBaseView_C_OnDialogClosed_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.RequestClose");
		
		UImagineStackBBaseView_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.Destruct
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.Destruct");
		
		UImagineStackBBaseView_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseEndDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBBaseView_C::OnCloseEndDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseEndDialog");
		
		UImagineStackBBaseView_C_OnCloseEndDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.ExecuteUbergraph_ImagineStackBBaseView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBBaseView_C::ExecuteUbergraph_ImagineStackBBaseView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.ExecuteUbergraph_ImagineStackBBaseView");
		
		UImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineStackBBaseView_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnClose__DelegateSignature");
		
		UImagineStackBBaseView_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineStackBBaseView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineStackBBaseView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineStackBBaseView.ImagineStackBBaseView_C");
		return ptr;
	}

}


