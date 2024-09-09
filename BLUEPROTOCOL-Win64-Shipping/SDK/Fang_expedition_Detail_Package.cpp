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
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFastFinish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::SetFastFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFastFinish");
		
		UFang_expedition_Detail_C_SetFastFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetCloseBtnVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_Detail_C::SetCloseBtnVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetCloseBtnVisible");
		
		UFang_expedition_Detail_C_SetCloseBtnVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.UpdateRandomRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::UpdateRandomRewardData(struct FSBFang_expeditionPlayData* PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.UpdateRandomRewardData");
		
		UFang_expedition_Detail_C_UpdateRandomRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayData != nullptr)
			*PlayData = params.PlayData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.AreaListOpenButtonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_Detail_C::AreaListOpenButtonVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.AreaListOpenButtonVisibility");
		
		UFang_expedition_Detail_C_AreaListOpenButtonVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.ResetFangData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::ResetFangData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.ResetFangData");
		
		UFang_expedition_Detail_C_ResetFangData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedTimeIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::GetSelectedTimeIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedTimeIndex");
		
		UFang_expedition_Detail_C_GetSelectedTimeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectTokenData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::SetSelectTokenData(TArray<int32_t>* TokenList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectTokenData");
		
		UFang_expedition_Detail_C_SetSelectTokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenList != nullptr)
			*TokenList = params.TokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFangSelectMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SelectMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_Detail_C::SetFangSelectMode(bool SelectMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFangSelectMode");
		
		UFang_expedition_Detail_C_SetFangSelectMode_Params params {};
		params.SelectMode = SelectMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  Data                                                       (Parm, OutParm)
	 */
	void UFang_expedition_Detail_C::GetSelectedAreaData(struct FSBFang_expeditionAreaData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedAreaData");
		
		UFang_expedition_Detail_C_GetSelectedAreaData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectFangData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueIds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::SetSelectFangData(TArray<class FString>* UniqueIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectFangData");
		
		UFang_expedition_Detail_C_SetSelectFangData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueIds != nullptr)
			*UniqueIds = params.UniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetPlayAreaId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::GetPlayAreaId(class FString* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetPlayAreaId");
		
		UFang_expedition_Detail_C_GetPlayAreaId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.UnbindFunction
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::UnbindFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.UnbindFunction");
		
		UFang_expedition_Detail_C_UnbindFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.BindFunction
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::BindFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.BindFunction");
		
		UFang_expedition_Detail_C_BindFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            CancelCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::SetPlayData(const struct FSBFang_expeditionPlayData& PlayData, int32_t CancelCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetPlayData");
		
		UFang_expedition_Detail_C_SetPlayData_Params params {};
		params.PlayData = PlayData;
		params.CancelCount = CancelCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ButtonDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_Detail_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData, bool ButtonDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetAreaData");
		
		UFang_expedition_Detail_C_SetAreaData_Params params {};
		params.AreaData = AreaData;
		params.ButtonDisable = ButtonDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetViewType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::SetViewType(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetViewType");
		
		UFang_expedition_Detail_C_SetViewType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_Detail_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.PreConstruct");
		
		UFang_expedition_Detail_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.Construct");
		
		UFang_expedition_Detail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::CB_OnClickRandomRewardView(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView");
		
		UFang_expedition_Detail_C_CB_OnClickRandomRewardView_Params params {};
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
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.Destruct");
		
		UFang_expedition_Detail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionCancel
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::CB_OnClickExpeditionCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionCancel");
		
		UFang_expedition_Detail_C_CB_OnClickExpeditionCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickUseTicket
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::CB_OnClickUseTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickUseTicket");
		
		UFang_expedition_Detail_C_CB_OnClickUseTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::CB_OnClickExpeditionFinish(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionFinish");
		
		UFang_expedition_Detail_C_CB_OnClickExpeditionFinish_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickFangSelectOpen
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::CB_OnClickFangSelectOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickFangSelectOpen");
		
		UFang_expedition_Detail_C_CB_OnClickFangSelectOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnTokenWindowOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    SelectTokenIds                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::CB_OnTokenWindowOpen(TArray<int32_t>* SelectTokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnTokenWindowOpen");
		
		UFang_expedition_Detail_C_CB_OnTokenWindowOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectTokenIds != nullptr)
			*SelectTokenIds = params.SelectTokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnExpeditionStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<int32_t>                                    TokenData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::CB_OnExpeditionStart(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t>* TokenData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnExpeditionStart");
		
		UFang_expedition_Detail_C_CB_OnExpeditionStart_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenData != nullptr)
			*TokenData = params.TokenData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickCloseButton
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::CB_OnClickCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickCloseButton");
		
		UFang_expedition_Detail_C_CB_OnClickCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView_PlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_Detail_C::CB_OnClickRandomRewardView_PlayData(const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView_PlayData");
		
		UFang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData_Params params {};
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.ExecuteUbergraph_Fang_expedition_Detail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::ExecuteUbergraph_Fang_expedition_Detail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.ExecuteUbergraph_Fang_expedition_Detail");
		
		UFang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView_PlayData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_Detail_C::OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView_PlayData__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature_Params params {};
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickCloseButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::OnClickCloseButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickCloseButton__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickCloseButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionStart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<int32_t>                                    TokenIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_Detail_C::OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t>* TokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionStart__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenIds != nullptr)
			*TokenIds = params.TokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickTokenWindowOpen__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_Detail_C::OnClickTokenWindowOpen__DelegateSignature(TArray<int32_t>* TokenIds, const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickTokenWindowOpen__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenIds != nullptr)
			*TokenIds = params.TokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickFangSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::OnClickFangSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickFangSelect__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickFangSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::OnClickExpeditionFinish__DelegateSignature(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionFinish__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickUseTicket__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::OnClickUseTicket__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickUseTicket__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickUseTicket__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_Detail_C::OnClickExpeditionCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionCancel__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickExpeditionCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_Detail_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView__DelegateSignature");
		
		UFang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UFang_expedition_Detail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_Detail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_Detail.Fang_expedition_Detail_C");
		return ptr;
	}

}


