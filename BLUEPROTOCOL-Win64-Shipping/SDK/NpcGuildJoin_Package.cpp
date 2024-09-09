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
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.InVisitorInitialize
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::InVisitorInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.InVisitorInitialize");
		
		UNpcGuildJoin_C_InVisitorInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UNpcGuildJoin_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.GetGuildComp");
		
		UNpcGuildJoin_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNpcGuildJoin_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature_Params params {};
		params.GuildEntry = GuildEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteFindGuildShortID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnCompleteFindGuildShortID(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteFindGuildShortID");
		
		UNpcGuildJoin_C_OnCompleteFindGuildShortID_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Initialize
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Initialize");
		
		UNpcGuildJoin_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Construct
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Construct");
		
		UNpcGuildJoin_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.bindInitialize
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::bindInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.bindInitialize");
		
		UNpcGuildJoin_C_bindInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Destruct");
		
		UNpcGuildJoin_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Listen Action Close
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::ListenActionClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Listen Action Close");
		
		UNpcGuildJoin_C_ListenActionClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnClosePressed
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::OnClosePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnClosePressed");
		
		UNpcGuildJoin_C_OnClosePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnCompletedChangeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnCompletedChangeName(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnCompletedChangeName");
		
		UNpcGuildJoin_C_OnCompletedChangeName_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnOrganized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnOrganized(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnOrganized");
		
		UNpcGuildJoin_C_OnOrganized_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Request_Close
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::Request_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Request_Close");
		
		UNpcGuildJoin_C_Request_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnComplete_GuildDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuildData                                  InGuildData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcGuildJoin_C::OnComplete_GuildDetail(int32_t RetCode, const struct FGuildData& InGuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnComplete_GuildDetail");
		
		UNpcGuildJoin_C_OnComplete_GuildDetail_Params params {};
		params.RetCode = RetCode;
		params.InGuildData = InGuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteCancelEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnCompleteCancelEntry(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteCancelEntry");
		
		UNpcGuildJoin_C_OnCompleteCancelEntry_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnInviteArraimented
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnInviteArraimented(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnInviteArraimented");
		
		UNpcGuildJoin_C_OnInviteArraimented_Params params {};
		params.RetCode = RetCode;
		params.isAccept = isAccept;
		params.InEntryId = InEntryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature");
		
		UNpcGuildJoin_C_BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteGetGuildData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::OnCompleteGetGuildData_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteGetGuildData_Event");
		
		UNpcGuildJoin_C_OnCompleteGetGuildData_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.Event_SetNowTurorialHelpId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialHelpId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::Event_SetNowTurorialHelpId(const class FName& TutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.Event_SetNowTurorialHelpId");
		
		UNpcGuildJoin_C_Event_SetNowTurorialHelpId_Params params {};
		params.TutorialHelpId = TutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.ExecuteUbergraph_NpcGuildJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildJoin_C::ExecuteUbergraph_NpcGuildJoin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.ExecuteUbergraph_NpcGuildJoin");
		
		UNpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildJoin.NpcGuildJoin_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildJoin_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildJoin.NpcGuildJoin_C.OnClose__DelegateSignature");
		
		UNpcGuildJoin_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNpcGuildJoin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNpcGuildJoin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NpcGuildJoin.NpcGuildJoin_C");
		return ptr;
	}

}


