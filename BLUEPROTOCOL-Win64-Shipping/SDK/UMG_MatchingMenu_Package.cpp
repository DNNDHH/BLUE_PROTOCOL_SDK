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
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClickSupplyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_C::OnClickSupplyIcon(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClickSupplyIcon");
		
		UUMG_MatchingMenu_C_OnClickSupplyIcon_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.GetCurrentWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_MatchingMenu_C::GetCurrentWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.GetCurrentWidget");
		
		UUMG_MatchingMenu_C_GetCurrentWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.SetWindowState
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::SetWindowState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.SetWindowState");
		
		UUMG_MatchingMenu_C_SetWindowState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.Construct");
		
		UUMG_MatchingMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMapInfo>                          DungeonMapInfoArray                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUnlimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_C::BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature_Params params {};
		params.bUnlimit = bUnlimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DungeonMapInfoArray != nullptr)
			*DungeonMapInfoArray = params.DungeonMapInfoArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.Destruct");
		
		UUMG_MatchingMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.ResetWindowState
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::ResetWindowState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.ResetWindowState");
		
		UUMG_MatchingMenu_C_ResetWindowState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGame_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMatchingGameState*                        MatchedGame                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_C::OnMatchedGame_Event(class USBMatchingGameState* MatchedGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGame_Event");
		
		UUMG_MatchingMenu_C_OnMatchedGame_Event_Params params {};
		params.MatchedGame = MatchedGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGameCloseWindow_Event
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::OnMatchedGameCloseWindow_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGameCloseWindow_Event");
		
		UUMG_MatchingMenu_C_OnMatchedGameCloseWindow_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnUICancel_Event
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::OnUICancel_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnUICancel_Event");
		
		UUMG_MatchingMenu_C_OnUICancel_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1");
		
		UUMG_MatchingMenu_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnCloseDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnCloseDetailMenu");
		
		UUMG_MatchingMenu_C_OnCloseDetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.ForceExitMenu
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::ForceExitMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.ForceExitMenu");
		
		UUMG_MatchingMenu_C_ForceExitMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.ExecuteUbergraph_UMG_MatchingMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_C::ExecuteUbergraph_UMG_MatchingMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.ExecuteUbergraph_UMG_MatchingMenu");
		
		UUMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchingStart_Success__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_C::OnMatchingStart_Success__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchingStart_Success__DelegateSignature");
		
		UUMG_MatchingMenu_C_OnMatchingStart_Success__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_MatchingMenu_C*                         Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_C::OnClose__DelegateSignature(class UUMG_MatchingMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClose__DelegateSignature");
		
		UUMG_MatchingMenu_C_OnClose__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu.UMG_MatchingMenu_C");
		return ptr;
	}

}


