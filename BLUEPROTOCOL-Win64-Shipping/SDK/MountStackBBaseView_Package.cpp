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
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterBeginStep
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::RewindResultAfterBeginStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterBeginStep");
		
		UMountStackBBaseView_C_RewindResultAfterBeginStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterStep1
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::RewindResultAfterStep1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterStep1");
		
		UMountStackBBaseView_C_RewindResultAfterStep1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.ShowResult
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::ShowResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.ShowResult");
		
		UMountStackBBaseView_C_ShowResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.HideResult
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::HideResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.HideResult");
		
		UMountStackBBaseView_C_HideResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.UpdateStep
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::UpdateStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.UpdateStep");
		
		UMountStackBBaseView_C_UpdateStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.UpdateLiquidMemory
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::UpdateLiquidMemory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.UpdateLiquidMemory");
		
		UMountStackBBaseView_C_UpdateLiquidMemory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.GetMaterialUIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Uids                                                       (Parm, OutParm)
	 */
	void UMountStackBBaseView_C::GetMaterialUIDs(TArray<class FString>* Uids)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.GetMaterialUIDs");
		
		UMountStackBBaseView_C_GetMaterialUIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Uids != nullptr)
			*Uids = params.Uids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.GetTickets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBStackBUseTicket>                  Tickets                                                    (Parm, OutParm)
	 */
	void UMountStackBBaseView_C::GetTickets(TArray<struct FSBStackBUseTicket>* Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.GetTickets");
		
		UMountStackBBaseView_C_GetTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tickets != nullptr)
			*Tickets = params.Tickets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.InitializeButtons
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::InitializeButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.InitializeButtons");
		
		UMountStackBBaseView_C_InitializeButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnSelect Mount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMountStackBBaseView_C::OnSelectMount(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnSelect Mount");
		
		UMountStackBBaseView_C_OnSelectMount_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnSelectMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        Uids                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               UseTicket                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStackBUseTicket                          StackBTicket                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UMountStackBBaseView_C::OnSelectMaterial(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnSelectMaterial");
		
		UMountStackBBaseView_C_OnSelectMaterial_Params params {};
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
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.ReselectStep2
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::ReselectStep2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.ReselectStep2");
		
		UMountStackBBaseView_C_ReselectStep2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnCloseMountImagineSelectDialog
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::OnCloseMountImagineSelectDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnCloseMountImagineSelectDialog");
		
		UMountStackBBaseView_C_OnCloseMountImagineSelectDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnCloseSelectMaterialDialog
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::OnCloseSelectMaterialDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnCloseSelectMaterialDialog");
		
		UMountStackBBaseView_C_OnCloseSelectMaterialDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.ReselectStap1
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::ReselectStap1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.ReselectStap1");
		
		UMountStackBBaseView_C_ReselectStap1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OpenStep2
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::OpenStep2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OpenStep2");
		
		UMountStackBBaseView_C_OpenStep2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Mount Imagine
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnBeginSelectMountImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Mount Imagine");
		
		UMountStackBBaseView_C_EventOnBeginSelectMountImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Mount Imagine
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnEndSelectMountImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Mount Imagine");
		
		UMountStackBBaseView_C_EventOnEndSelectMountImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Material
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnBeginSelectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Material");
		
		UMountStackBBaseView_C_EventOnBeginSelectMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Material
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnEndSelectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Material");
		
		UMountStackBBaseView_C_EventOnEndSelectMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Execute
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnBeginExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Execute");
		
		UMountStackBBaseView_C_EventOnBeginExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Event On End Execute
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::EventOnEndExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Event On End Execute");
		
		UMountStackBBaseView_C_EventOnEndExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Construct
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Construct");
		
		UMountStackBBaseView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Init
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Init");
		
		UMountStackBBaseView_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Term
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::Term()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Term");
		
		UMountStackBBaseView_C_Term_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnPushedCancelKey
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::OnPushedCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnPushedCancelKey");
		
		UMountStackBBaseView_C_OnPushedCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Close
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Close");
		
		UMountStackBBaseView_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BindMountStackB
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BindMountStackB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BindMountStackB");
		
		UMountStackBBaseView_C_BindMountStackB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnComplete StackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                Imagine                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMountStackBBaseView_C::OnCompleteStackB(int32_t RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnComplete StackB");
		
		UMountStackBBaseView_C_OnCompleteStackB_Params params {};
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
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature");
		
		UMountStackBBaseView_C_BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnCloseDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountStackBBaseView_C::OnCloseDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnCloseDialog");
		
		UMountStackBBaseView_C_OnCloseDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.UnbindMountStackB
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::UnbindMountStackB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.UnbindMountStackB");
		
		UMountStackBBaseView_C_UnbindMountStackB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnResultDialogClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountStackBBaseView_C::OnResultDialogClose(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnResultDialogClose");
		
		UMountStackBBaseView_C_OnResultDialogClose_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.Force Close
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.Force Close");
		
		UMountStackBBaseView_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.ExecuteUbergraph_MountStackBBaseView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountStackBBaseView_C::ExecuteUbergraph_MountStackBBaseView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.ExecuteUbergraph_MountStackBBaseView");
		
		UMountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountStackBBaseView.MountStackBBaseView_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountStackBBaseView_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountStackBBaseView.MountStackBBaseView_C.OnClose__DelegateSignature");
		
		UMountStackBBaseView_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountStackBBaseView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountStackBBaseView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MountStackBBaseView.MountStackBBaseView_C");
		return ptr;
	}

}


