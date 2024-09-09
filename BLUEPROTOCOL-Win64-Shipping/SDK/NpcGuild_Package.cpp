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
	 * 		Name   -> Function NpcGuild.NpcGuild_C.InGuildMemberInialize
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::InGuildMemberInialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.InGuildMemberInialize");
		
		UNpcGuild_C_InGuildMemberInialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UNpcGuild_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.GetGuildComp");
		
		UNpcGuild_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature");
		
		UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature");
		
		UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature");
		
		UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
		
		UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature_Params params {};
		params.GuildEntry = GuildEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnCompleteFindGuildShortID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnCompleteFindGuildShortID(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnCompleteFindGuildShortID");
		
		UNpcGuild_C_OnCompleteFindGuildShortID_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.bindInitialize
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::bindInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.bindInitialize");
		
		UNpcGuild_C_bindInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Destruct");
		
		UNpcGuild_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");
		
		UNpcGuild_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Listen Action Close
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::ListenActionClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Listen Action Close");
		
		UNpcGuild_C_ListenActionClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnClosePressed
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::OnClosePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnClosePressed");
		
		UNpcGuild_C_OnClosePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnCompletedChangeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnCompletedChangeName(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnCompletedChangeName");
		
		UNpcGuild_C_OnCompletedChangeName_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Initialize
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Initialize");
		
		UNpcGuild_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnOrganized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnOrganized(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnOrganized");
		
		UNpcGuild_C_OnOrganized_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnGuildWithDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnGuildWithDraw(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnGuildWithDraw");
		
		UNpcGuild_C_OnGuildWithDraw_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnCloseRequest
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::OnCloseRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnCloseRequest");
		
		UNpcGuild_C_OnCloseRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnDissolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnDissolution(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnDissolution");
		
		UNpcGuild_C_OnDissolution_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UNpcGuild_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Construct
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Construct");
		
		UNpcGuild_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Event_OnCompleteNotifyKickedFromGuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KickedGuildName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Event_OnCompleteNotifyKickedFromGuild");
		
		UNpcGuild_C_Event_OnCompleteNotifyKickedFromGuild_Params params {};
		params.KickedGuildName = KickedGuildName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.Event_SetNowTurorialHelpId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialHelpId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::Event_SetNowTurorialHelpId(const class FName& TutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.Event_SetNowTurorialHelpId");
		
		UNpcGuild_C_Event_SetNowTurorialHelpId_Params params {};
		params.TutorialHelpId = TutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnCompleteGetGuildData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::OnCompleteGetGuildData_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnCompleteGetGuildData_Event");
		
		UNpcGuild_C_OnCompleteGetGuildData_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.ExecuteUbergraph_NpcGuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuild_C::ExecuteUbergraph_NpcGuild(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.ExecuteUbergraph_NpcGuild");
		
		UNpcGuild_C_ExecuteUbergraph_NpcGuild_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuild.NpcGuild_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuild_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuild.NpcGuild_C.OnClose__DelegateSignature");
		
		UNpcGuild_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNpcGuild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNpcGuild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NpcGuild.NpcGuild_C");
		return ptr;
	}

}


