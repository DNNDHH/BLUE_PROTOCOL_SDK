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
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESBClassType>                               InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsPartyClass(TArray<ESBClassType>* InClass, class UObject* __WorldContext, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyClass");
		
		UBP_MatchingFunctionLiblary_C_IsPartyClass_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InClass != nullptr)
			*InClass = params.InClass;
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsRecruitParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsRecruitParty(class UObject* __WorldContext, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsRecruitParty");
		
		UBP_MatchingFunctionLiblary_C_IsRecruitParty_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMemberNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxMember                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsEnableDungeonMemberNum(int32_t MaxMember, class UObject* __WorldContext, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMemberNum");
		
		UBP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum_Params params {};
		params.MaxMember = MaxMember;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMatching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  InMapInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsEnableDungeonMatching(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMatching");
		
		UBP_MatchingFunctionLiblary_C_IsEnableDungeonMatching_Params params {};
		params.InMapInfo = InMapInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  InMapInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsEnableDungeonStart(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonStart");
		
		UBP_MatchingFunctionLiblary_C_IsEnableDungeonStart_Params params {};
		params.InMapInfo = InMapInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinTotalPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchingFunctionLiblary_C::GetPartyMinTotalPower(class UObject* __WorldContext, int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinTotalPower");
		
		UBP_MatchingFunctionLiblary_C_GetPartyMinTotalPower_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchingFunctionLiblary_C::GetPartyMinLevel(class UObject* __WorldContext, int32_t* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinLevel");
		
		UBP_MatchingFunctionLiblary_C_GetPartyMinLevel_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnCancelMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMatchingMenu*                             MatchingMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::OnCancelMatchmaking(class USBMatchingMenu* MatchingMenu, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnCancelMatchmaking");
		
		UBP_MatchingFunctionLiblary_C_OnCancelMatchmaking_Params params {};
		params.MatchingMenu = MatchingMenu;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnStartMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMatchingMenu*                             MatchingMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBMapInfo>                          DungeonMapInfoArray                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUnlimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Backfill                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::OnStartMatchmaking(class USBMatchingMenu* MatchingMenu, TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit, bool Backfill, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnStartMatchmaking");
		
		UBP_MatchingFunctionLiblary_C_OnStartMatchmaking_Params params {};
		params.MatchingMenu = MatchingMenu;
		params.bUnlimit = bUnlimit;
		params.Backfill = Backfill;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DungeonMapInfoArray != nullptr)
			*DungeonMapInfoArray = params.DungeonMapInfoArray;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsMaxParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxMember                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsMaxParty(int32_t MaxMember, class UObject* __WorldContext, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsMaxParty");
		
		UBP_MatchingFunctionLiblary_C_IsMaxParty_Params params {};
		params.MaxMember = MaxMember;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsSendingParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchingFunctionLiblary_C::IsSendingParty(class UObject* __WorldContext, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsSendingParty");
		
		UBP_MatchingFunctionLiblary_C_IsSendingParty_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_MatchingFunctionLiblary_C::IsPartyLeader(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyLeader");
		
		UBP_MatchingFunctionLiblary_C_IsPartyLeader_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MatchingFunctionLiblary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MatchingFunctionLiblary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C");
		return ptr;
	}

}


