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
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.SetLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Loading                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::SetLoading(bool Loading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.SetLoading");
		
		UBP_Fang_expedition_C_SetLoading_Params params {};
		params.Loading = Loading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnItemDetailListClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnItemDetailListClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnItemDetailListClose");
		
		UBP_Fang_expedition_C_OnItemDetailListClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.MapIconClickWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::MapIconClickWork(const class FString& ID, bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.MapIconClickWork");
		
		UBP_Fang_expedition_C_MapIconClickWork_Params params {};
		params.ID = ID;
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ReloadPlayDataDetail
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::ReloadPlayDataDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ReloadPlayDataDetail");
		
		UBP_Fang_expedition_C_ReloadPlayDataDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressDungeonListClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnPressDungeonListClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressDungeonListClose");
		
		UBP_Fang_expedition_C_OnPressDungeonListClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnDetailAreaListClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnDetailAreaListClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnDetailAreaListClick");
		
		UBP_Fang_expedition_C_OnDetailAreaListClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconGroupClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionIconData                  IconData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Fang_expedition_C::OnMapIconGroupClick(const struct FSBFang_expeditionIconData& IconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconGroupClick");
		
		UBP_Fang_expedition_C_OnMapIconGroupClick_Params params {};
		params.IconData = IconData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView_PlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Fang_expedition_C::OnProbabilityListView_PlayData(const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView_PlayData");
		
		UBP_Fang_expedition_C_OnProbabilityListView_PlayData_Params params {};
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Fang_expedition_C::OnListSelect_DungeonArea(int32_t Index, const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonArea");
		
		UBP_Fang_expedition_C_OnListSelect_DungeonArea_Params params {};
		params.Index = Index;
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnMapIconClick(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconClick");
		
		UBP_Fang_expedition_C_OnMapIconClick_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.SetupFieldMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::SetupFieldMap(const class FString& FieldId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.SetupFieldMap");
		
		UBP_Fang_expedition_C_SetupFieldMap_Params params {};
		params.FieldId = FieldId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.GetTokenUseDialogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::GetTokenUseDialogMessage(TArray<int32_t>* TokenIds, class FString* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.GetTokenUseDialogMessage");
		
		UBP_Fang_expedition_C_GetTokenUseDialogMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenIds != nullptr)
			*TokenIds = params.TokenIds;
		if (Message != nullptr)
			*Message = params.Message;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionPlayDetailOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ExpeditionPlayDetailOpen(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionPlayDetailOpen");
		
		UBP_Fang_expedition_C_ExpeditionPlayDetailOpen_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::FangSelectClose(bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectClose");
		
		UBP_Fang_expedition_C_FangSelectClose_Params params {};
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.DisplayTargetPlayDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AreaId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::DisplayTargetPlayDetail(const class FString& AreaId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.DisplayTargetPlayDetail");
		
		UBP_Fang_expedition_C_DisplayTargetPlayDetail_Params params {};
		params.AreaId = AreaId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartRequest
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::ExpeditionStartRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartRequest");
		
		UBP_Fang_expedition_C_ExpeditionStartRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnTokenWindowClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Fang_expedition_C::OnTokenWindowClose(TArray<int32_t>* TokenList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnTokenWindowClose");
		
		UBP_Fang_expedition_C_OnTokenWindowClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenList != nullptr)
			*TokenList = params.TokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnFangListSelectChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Fang_expedition_C::OnFangListSelectChange(TArray<class FString>* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnFangListSelectChange");
		
		UBP_Fang_expedition_C_OnFangListSelectChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.FindPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ExpeditionId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  FindData                                                   (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::FindPlayData(const class FString& ExpeditionId, struct FSBFang_expeditionPlayData* FindData, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.FindPlayData");
		
		UBP_Fang_expedition_C_FindPlayData_Params params {};
		params.ExpeditionId = ExpeditionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FindData != nullptr)
			*FindData = params.FindData;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionRewardView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               LotterySkip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::ExpeditionRewardView(const struct FSBFang_expeditionPlayData& PlayData, bool LotterySkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionRewardView");
		
		UBP_Fang_expedition_C_ExpeditionRewardView_Params params {};
		params.PlayData = PlayData;
		params.LotterySkip = LotterySkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.UpdateExpeditionData
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::UpdateExpeditionData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.UpdateExpeditionData");
		
		UBP_Fang_expedition_C_UpdateExpeditionData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_Immediate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnComplete_Immediate(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_Immediate");
		
		UBP_Fang_expedition_C_OnComplete_Immediate_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectOpen
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::FangSelectOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectOpen");
		
		UBP_Fang_expedition_C_FangSelectOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnProbabilityListClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListClose");
		
		UBP_Fang_expedition_C_OnProbabilityListClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnProbabilityListView(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView");
		
		UBP_Fang_expedition_C_OnProbabilityListView_Params params {};
		params.AreaData = AreaData;
		params.TimeIndex = TimeIndex;
		params.FangValue = FangValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.SetPlayListVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::SetPlayListVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.SetPlayListVisibility");
		
		UBP_Fang_expedition_C_SetPlayListVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnListSelect_DungeonTicket(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonTicket");
		
		UBP_Fang_expedition_C_OnListSelect_DungeonTicket_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonStandby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnListSelect_DungeonStandby(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonStandby");
		
		UBP_Fang_expedition_C_OnListSelect_DungeonStandby_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Fang_expedition_C::OnListSelect_DungeonPlay(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonPlay");
		
		UBP_Fang_expedition_C_OnListSelect_DungeonPlay_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnListSelect_Field(const class FString& Field, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Field");
		
		UBP_Fang_expedition_C_OnListSelect_Field_Params params {};
		params.Field = Field;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Town
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnListSelect_Town(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Town");
		
		UBP_Fang_expedition_C_OnListSelect_Town_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.Initialize
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.Initialize");
		
		UBP_Fang_expedition_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.UnBindEvent
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::UnBindEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.UnBindEvent");
		
		UBP_Fang_expedition_C_UnBindEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BindEvent
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BindEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BindEvent");
		
		UBP_Fang_expedition_C_BindEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation2");
		
		UBP_Fang_expedition_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation");
		
		UBP_Fang_expedition_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.InitializeAreaListData
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::InitializeAreaListData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.InitializeAreaListData");
		
		UBP_Fang_expedition_C_InitializeAreaListData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.VisibilityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::VisibilityChange(int32_t Type, bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.VisibilityChange");
		
		UBP_Fang_expedition_C_VisibilityChange_Params params {};
		params.Type = Type;
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BackButtonPress
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BackButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BackButtonPress");
		
		UBP_Fang_expedition_C_BackButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnRequesting
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::AcceptWindow_OnRequesting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnRequesting");
		
		UBP_Fang_expedition_C_AcceptWindow_OnRequesting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::AcceptWindow_OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnClose");
		
		UBP_Fang_expedition_C_AcceptWindow_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptResultOpen
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::AcceptResultOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptResultOpen");
		
		UBP_Fang_expedition_C_AcceptResultOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnAcceptResultClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnAcceptResultClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnAcceptResultClose");
		
		UBP_Fang_expedition_C_OnAcceptResultClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_GetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnComplete_GetReward(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_GetReward");
		
		UBP_Fang_expedition_C_OnComplete_GetReward_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionStart_Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnExpeditionStart_Complete(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionStart_Complete");
		
		UBP_Fang_expedition_C_OnExpeditionStart_Complete_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnOpenRareRequest_Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnOpenRareRequest_Complete(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnOpenRareRequest_Complete");
		
		UBP_Fang_expedition_C_OnOpenRareRequest_Complete_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.DungeonSlotAnimationFinish
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::DungeonSlotAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.DungeonSlotAnimationFinish");
		
		UBP_Fang_expedition_C_DungeonSlotAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ImmediateErrorWork(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorWork");
		
		UBP_Fang_expedition_C_ImmediateErrorWork_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorDialogWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ImmediateErrorDialogWork(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorDialogWork");
		
		UBP_Fang_expedition_C_ImmediateErrorDialogWork_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ImmediateErrorReload(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorReload");
		
		UBP_Fang_expedition_C_ImmediateErrorReload_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionDataUpdate
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::ExpeditionDataUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionDataUpdate");
		
		UBP_Fang_expedition_C_ExpeditionDataUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.DataUpdateWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::DataUpdateWork(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.DataUpdateWork");
		
		UBP_Fang_expedition_C_DataUpdateWork_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnCheckReward_Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnCheckReward_Complete(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnCheckReward_Complete");
		
		UBP_Fang_expedition_C_OnCheckReward_Complete_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnGetListEnd_1(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_1");
		
		UBP_Fang_expedition_C_OnGetListEnd_1_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnGetListEnd_2(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_2");
		
		UBP_Fang_expedition_C_OnGetListEnd_2_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnGetListEnd_3(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_3");
		
		UBP_Fang_expedition_C_OnGetListEnd_3_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionCancelButtonWork
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::ExpeditionCancelButtonWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionCancelButtonWork");
		
		UBP_Fang_expedition_C_ExpeditionCancelButtonWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.CancelDialogSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::CancelDialogSelect(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.CancelDialogSelect");
		
		UBP_Fang_expedition_C_CancelDialogSelect_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionImmediateWork
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::ExpeditionImmediateWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionImmediateWork");
		
		UBP_Fang_expedition_C_ExpeditionImmediateWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateDialogSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ImmediateDialogSelect(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateDialogSelect");
		
		UBP_Fang_expedition_C_ImmediateDialogSelect_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionFinishButtonWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ExpeditionFinishButtonWork(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionFinishButtonWork");
		
		UBP_Fang_expedition_C_ExpeditionFinishButtonWork_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.TicketSelectWindowOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenIds                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Fang_expedition_C::TicketSelectWindowOpen(TArray<int32_t> TokenIds, const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.TicketSelectWindowOpen");
		
		UBP_Fang_expedition_C_TicketSelectWindowOpen_Params params {};
		params.TokenIds = TokenIds;
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartButtonWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<int32_t>                                    TokenIds                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Fang_expedition_C::ExpeditionStartButtonWork(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t> TokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartButtonWork");
		
		UBP_Fang_expedition_C_ExpeditionStartButtonWork_Params params {};
		params.AreaData = AreaData;
		params.TokenIds = TokenIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.StartDialogSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::StartDialogSelect(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.StartDialogSelect");
		
		UBP_Fang_expedition_C_StartDialogSelect_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.DetailClose
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::DetailClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.DetailClose");
		
		UBP_Fang_expedition_C_DetailClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.UseCheckDialogWork
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::UseCheckDialogWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.UseCheckDialogWork");
		
		UBP_Fang_expedition_C_UseCheckDialogWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistOpenButton
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnPressPlaylistOpenButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistOpenButton");
		
		UBP_Fang_expedition_C_OnPressPlaylistOpenButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistDetailButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnPressPlaylistDetailButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistDetailButton");
		
		UBP_Fang_expedition_C_OnPressPlaylistDetailButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistFinishButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnPressPlaylistFinishButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistFinishButton");
		
		UBP_Fang_expedition_C_OnPressPlaylistFinishButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnDungeonOpenTicketDialogSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::OnDungeonOpenTicketDialogSelect(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnDungeonOpenTicketDialogSelect");
		
		UBP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::PlayListUpdate(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListUpdate");
		
		UBP_Fang_expedition_C_PlayListUpdate_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListDetailUpdateWork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::PlayListDetailUpdateWork(bool WasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListDetailUpdateWork");
		
		UBP_Fang_expedition_C_PlayListDetailUpdateWork_Params params {};
		params.WasSuccessful = WasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.Construct");
		
		UBP_Fang_expedition_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPress_Cancel");
		
		UBP_Fang_expedition_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.SceneFinish
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::SceneFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.SceneFinish");
		
		UBP_Fang_expedition_C_SceneFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.onAnimTimer");
		
		UBP_Fang_expedition_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressBackButton
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnPressBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressBackButton");
		
		UBP_Fang_expedition_C_OnPressBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.Complete_GetRewardBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::Complete_GetRewardBoost(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.Complete_GetRewardBoost");
		
		UBP_Fang_expedition_C_Complete_GetRewardBoost_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4");
		
		UBP_Fang_expedition_C_WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.Destruct");
		
		UBP_Fang_expedition_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::CustomEvent_1(bool WasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.CustomEvent_1");
		
		UBP_Fang_expedition_C_CustomEvent_1_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.Event_NotifyCompletionExpedition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::Event_NotifyCompletionExpedition(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.Event_NotifyCompletionExpedition");
		
		UBP_Fang_expedition_C_Event_NotifyCompletionExpedition_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.EventAnimSkip
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::EventAnimSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.EventAnimSkip");
		
		UBP_Fang_expedition_C_EventAnimSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.ExecuteUbergraph_BP_Fang_expedition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Fang_expedition_C::ExecuteUbergraph_BP_Fang_expedition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.ExecuteUbergraph_BP_Fang_expedition");
		
		UBP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionDataUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Fang_expedition_C::OnExpeditionDataUpdate__DelegateSignature(bool WasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionDataUpdate__DelegateSignature");
		
		UBP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature_Params params {};
		params.WasSuccessful = WasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fang_expedition.BP_Fang_expedition_C.OnSceneFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Fang_expedition_C::OnSceneFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fang_expedition.BP_Fang_expedition_C.OnSceneFinish__DelegateSignature");
		
		UBP_Fang_expedition_C_OnSceneFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Fang_expedition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Fang_expedition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Fang_expedition.BP_Fang_expedition_C");
		return ptr;
	}

}


