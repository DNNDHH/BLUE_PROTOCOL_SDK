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
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.GetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            N                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UResultDialog_DropTreasureTicketReward_C::GetTitleText(int32_t* N, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.GetTitleText");
		
		UResultDialog_DropTreasureTicketReward_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (N != nullptr)
			*N = params.N;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.GetGameStateDungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBGameState_Dungeon*                        GameStateDungeon                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultDialog_DropTreasureTicketReward_C::GetGameStateDungeon(class ASBGameState_Dungeon** GameStateDungeon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.GetGameStateDungeon");
		
		UResultDialog_DropTreasureTicketReward_C_GetGameStateDungeon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameStateDungeon != nullptr)
			*GameStateDungeon = params.GameStateDungeon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.ResetFlags
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::ResetFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.ResetFlags");
		
		UResultDialog_DropTreasureTicketReward_C_ResetFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.RemoveCallbacks
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::RemoveCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.RemoveCallbacks");
		
		UResultDialog_DropTreasureTicketReward_C_RemoveCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Close
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Close");
		
		UResultDialog_DropTreasureTicketReward_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Open
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Open");
		
		UResultDialog_DropTreasureTicketReward_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTokenTreasureBoxRewardInfo               Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            N                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultDialog_DropTreasureTicketReward_C::Setup(struct FSBTokenTreasureBoxRewardInfo* Info, int32_t N)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Setup");
		
		UResultDialog_DropTreasureTicketReward_C_Setup_Params params {};
		params.N = N;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Finished_378E73C64E3E6A3755C9FAA19C9F5B27
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Finished_378E73C64E3E6A3755C9FAA19C9F5B27()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Finished_378E73C64E3E6A3755C9FAA19C9F5B27");
		
		UResultDialog_DropTreasureTicketReward_C_Finished_378E73C64E3E6A3755C9FAA19C9F5B27_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Finished_74947E2E43F60DBC3B23B2A0CDBAC599
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Finished_74947E2E43F60DBC3B23B2A0CDBAC599()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Finished_74947E2E43F60DBC3B23B2A0CDBAC599");
		
		UResultDialog_DropTreasureTicketReward_C_Finished_74947E2E43F60DBC3B23B2A0CDBAC599_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Construct
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Construct");
		
		UResultDialog_DropTreasureTicketReward_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnPressCancel");
		
		UResultDialog_DropTreasureTicketReward_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Destruct
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Destruct");
		
		UResultDialog_DropTreasureTicketReward_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::BndEvt__ResultDialog_DropTreasureTicketReward_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_BndEvt__ResultDialog_DropTreasureTicketReward_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_Close_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::BndEvt__ResultDialog_DropTreasureTicketReward_Btn_Close_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_Close_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_BndEvt__ResultDialog_DropTreasureTicketReward_Btn_Close_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Event Open
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::EventOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Event Open");
		
		UResultDialog_DropTreasureTicketReward_C_EventOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Event Close
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::EventClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.Event Close");
		
		UResultDialog_DropTreasureTicketReward_C_EventClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnInitialized");
		
		UResultDialog_DropTreasureTicketReward_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::BndEvt__ResultDialog_DropTreasureTicketReward_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.BndEvt__ResultDialog_DropTreasureTicketReward_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_BndEvt__ResultDialog_DropTreasureTicketReward_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.ExecuteUbergraph_ResultDialog_DropTreasureTicketReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultDialog_DropTreasureTicketReward_C::ExecuteUbergraph_ResultDialog_DropTreasureTicketReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.ExecuteUbergraph_ResultDialog_DropTreasureTicketReward");
		
		UResultDialog_DropTreasureTicketReward_C_ExecuteUbergraph_ResultDialog_DropTreasureTicketReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnClosed__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::OnOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OnOpened__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_OnOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.CloseDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::CloseDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.CloseDelegate__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_CloseDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OpenDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResultDialog_DropTreasureTicketReward_C::OpenDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C.OpenDelegate__DelegateSignature");
		
		UResultDialog_DropTreasureTicketReward_C_OpenDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResultDialog_DropTreasureTicketReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResultDialog_DropTreasureTicketReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C");
		return ptr;
	}

}


