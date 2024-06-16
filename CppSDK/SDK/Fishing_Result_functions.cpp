#pragma once

 

// Package: Fishing_Result

#include "Basic.hpp"

#include "Fishing_Result_classes.hpp"
#include "Fishing_Result_parameters.hpp"


namespace SDK
{

// Function Fishing_Result.Fishing_Result_C.ExecuteUbergraph_Fishing_Result
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::ExecuteUbergraph_Fishing_Result(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "ExecuteUbergraph_Fishing_Result");

	Params::Fishing_Result_C_ExecuteUbergraph_Fishing_Result Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "PreConstruct");

	Params::Fishing_Result_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.SetThumnailIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::SetThumnailIcon(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "SetThumnailIcon");

	Params::Fishing_Result_C_SetThumnailIcon Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishing_Result_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::Fishing_Result_C_BndEvt__Fishing_Result_ContinueBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::Fishing_Result_C_BndEvt__Fishing_Result_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.AnimStart
// (BlueprintCallable, BlueprintEvent)

void UFishing_Result_C::AnimStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "AnimStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Result.Fishing_Result_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishing_Result_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Result.Fishing_Result_C.OnLoaded_B741E7294084427C7364DF8A5FD7B5FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::OnLoaded_B741E7294084427C7364DF8A5FD7B5FB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "OnLoaded_B741E7294084427C7364DF8A5FD7B5FB");

	Params::Fishing_Result_C_OnLoaded_B741E7294084427C7364DF8A5FD7B5FB Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.SetFishPlate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UploadSuccess                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ReturnCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           FishId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   FishLength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNewFish                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsNewRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::SetFishPlate(bool UploadSuccess, int32 ReturnCode, const class FString& FishId, const class FString& ItemName, float FishLength, int32 ItemAmount, bool IsNewFish, bool IsNewRecord, bool IsBig, int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "SetFishPlate");

	Params::Fishing_Result_C_SetFishPlate Parms{};

	Parms.UploadSuccess = UploadSuccess;
	Parms.ReturnCode = ReturnCode;
	Parms.FishId = std::move(FishId);
	Parms.ItemName = std::move(ItemName);
	Parms.FishLength = FishLength;
	Parms.ItemAmount = ItemAmount;
	Parms.IsNewFish = IsNewFish;
	Parms.IsNewRecord = IsNewRecord;
	Parms.IsBig = IsBig;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.CheckItemStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::CheckItemStorage(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "CheckItemStorage");

	Params::Fishing_Result_C_CheckItemStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Fishing_Result.Fishing_Result_C.CheckBackPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::CheckBackPack(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "CheckBackPack");

	Params::Fishing_Result_C_CheckBackPack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Fishing_Result.Fishing_Result_C.ShowCan'tGetFish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::ShowCan_tGetFish(bool TrueIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "ShowCan'tGetFish");

	Params::Fishing_Result_C_ShowCan_tGetFish Parms{};

	Parms.TrueIsVisible = TrueIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.ShowCan'tGetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::ShowCan_tGetItem(bool TrueIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "ShowCan'tGetItem");

	Params::Fishing_Result_C_ShowCan_tGetItem Parms{};

	Parms.TrueIsVisible = TrueIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.Reuslt Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Result_C::Reuslt_Visibility(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "Reuslt Visibility");

	Params::Fishing_Result_C_Reuslt_Visibility Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.SetThumbnail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FishId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsBig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::SetThumbnail(const class FString& FishId, bool IsBig, int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "SetThumbnail");

	Params::Fishing_Result_C_SetThumbnail Parms{};

	Parms.FishId = std::move(FishId);
	Parms.IsBig = IsBig;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Result.Fishing_Result_C.CheckErrorCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Result_C::CheckErrorCode(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Result_C", "CheckErrorCode");

	Params::Fishing_Result_C_CheckErrorCode Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}

}

