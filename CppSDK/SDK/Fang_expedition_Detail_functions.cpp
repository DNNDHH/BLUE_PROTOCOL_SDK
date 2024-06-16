#pragma once

 

// Package: Fang_expedition_Detail

#include "Basic.hpp"

#include "Fang_expedition_Detail_classes.hpp"
#include "Fang_expedition_Detail_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickRandomRewardListView__DelegateSignature");

	Params::Fang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TimeIndex = TimeIndex;
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::OnClickExpeditionCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickExpeditionCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickUseTicket__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::OnClickUseTicket__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickUseTicket__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::OnClickExpeditionFinish__DelegateSignature(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickExpeditionFinish__DelegateSignature");

	Params::Fang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickFangSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::OnClickFangSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickFangSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickTokenWindowOpen__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_Detail_C::OnClickTokenWindowOpen__DelegateSignature(TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickTokenWindowOpen__DelegateSignature");

	Params::Fang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature Parms{};

	Parms.TokenIds = std::move(TokenIds);
	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);

	TokenIds = std::move(Parms.TokenIds);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionStart__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                           TokenIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickExpeditionStart__DelegateSignature");

	Params::Fang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TokenIds = std::move(TokenIds);

	UObject::ProcessEvent(Func, &Parms);

	TokenIds = std::move(Parms.TokenIds);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::OnClickCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView_PlayData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_Detail_C::OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "OnClickRandomRewardListView_PlayData__DelegateSignature");

	Params::Fang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.ExecuteUbergraph_Fang_expedition_Detail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::ExecuteUbergraph_Fang_expedition_Detail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "ExecuteUbergraph_Fang_expedition_Detail");

	Params::Fang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView_PlayData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_Detail_C::CB_OnClickRandomRewardView_PlayData(const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickRandomRewardView_PlayData");

	Params::Fang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickCloseButton
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::CB_OnClickCloseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickCloseButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnExpeditionStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                           TokenData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::CB_OnExpeditionStart(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnExpeditionStart");

	Params::Fang_expedition_Detail_C_CB_OnExpeditionStart Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TokenData = std::move(TokenData);

	UObject::ProcessEvent(Func, &Parms);

	TokenData = std::move(Parms.TokenData);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnTokenWindowOpen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           SelectTokenIds                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::CB_OnTokenWindowOpen(TArray<int32>& SelectTokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnTokenWindowOpen");

	Params::Fang_expedition_Detail_C_CB_OnTokenWindowOpen Parms{};

	Parms.SelectTokenIds = std::move(SelectTokenIds);

	UObject::ProcessEvent(Func, &Parms);

	SelectTokenIds = std::move(Parms.SelectTokenIds);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickFangSelectOpen
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::CB_OnClickFangSelectOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickFangSelectOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::CB_OnClickExpeditionFinish(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickExpeditionFinish");

	Params::Fang_expedition_Detail_C_CB_OnClickExpeditionFinish Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickUseTicket
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::CB_OnClickUseTicket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickUseTicket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionCancel
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::CB_OnClickExpeditionCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickExpeditionCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_Detail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::CB_OnClickRandomRewardView(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "CB_OnClickRandomRewardView");

	Params::Fang_expedition_Detail_C_CB_OnClickRandomRewardView Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TimeIndex = TimeIndex;
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_Detail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_Detail_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "PreConstruct");

	Params::Fang_expedition_Detail_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetViewType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::SetViewType(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetViewType");

	Params::Fang_expedition_Detail_C_SetViewType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetAreaData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ButtonDisable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_Detail_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData, bool ButtonDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetAreaData");

	Params::Fang_expedition_Detail_C_SetAreaData Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.ButtonDisable = ButtonDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetPlayData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   CancelCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::SetPlayData(const struct FSBFang_expeditionPlayData& PlayData, int32 CancelCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetPlayData");

	Params::Fang_expedition_Detail_C_SetPlayData Parms{};

	Parms.PlayData = std::move(PlayData);
	Parms.CancelCount = CancelCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.BindFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::BindFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "BindFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.UnbindFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::UnbindFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "UnbindFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetPlayAreaId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::GetPlayAreaId(class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "GetPlayAreaId");

	Params::Fang_expedition_Detail_C_GetPlayAreaId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectFangData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::SetSelectFangData(TArray<class FString>& UniqueIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetSelectFangData");

	Params::Fang_expedition_Detail_C_SetSelectFangData Parms{};

	Parms.UniqueIds = std::move(UniqueIds);

	UObject::ProcessEvent(Func, &Parms);

	UniqueIds = std::move(Parms.UniqueIds);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedAreaData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       Data                                                   (Parm, OutParm)

void UFang_expedition_Detail_C::GetSelectedAreaData(struct FSBFang_expeditionAreaData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "GetSelectedAreaData");

	Params::Fang_expedition_Detail_C_GetSelectedAreaData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFangSelectMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SelectMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_Detail_C::SetFangSelectMode(bool SelectMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetFangSelectMode");

	Params::Fang_expedition_Detail_C_SetFangSelectMode Parms{};

	Parms.SelectMode = SelectMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectTokenData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::SetSelectTokenData(TArray<int32>& TokenList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetSelectTokenData");

	Params::Fang_expedition_Detail_C_SetSelectTokenData Parms{};

	Parms.TokenList = std::move(TokenList);

	UObject::ProcessEvent(Func, &Parms);

	TokenList = std::move(Parms.TokenList);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedTimeIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_Detail_C::GetSelectedTimeIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "GetSelectedTimeIndex");

	Params::Fang_expedition_Detail_C_GetSelectedTimeIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.ResetFangData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::ResetFangData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "ResetFangData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.AreaListOpenButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_Detail_C::AreaListOpenButtonVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "AreaListOpenButtonVisibility");

	Params::Fang_expedition_Detail_C_AreaListOpenButtonVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.UpdateRandomRewardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_Detail_C::UpdateRandomRewardData(struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "UpdateRandomRewardData");

	Params::Fang_expedition_Detail_C_UpdateRandomRewardData Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);

	PlayData = std::move(Parms.PlayData);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetCloseBtnVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_Detail_C::SetCloseBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetCloseBtnVisible");

	Params::Fang_expedition_Detail_C_SetCloseBtnVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFastFinish
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_Detail_C::SetFastFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_Detail_C", "SetFastFinish");

	UObject::ProcessEvent(Func, nullptr);
}

}

