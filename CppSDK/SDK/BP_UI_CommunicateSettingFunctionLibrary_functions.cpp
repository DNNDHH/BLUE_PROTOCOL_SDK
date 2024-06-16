#pragma once

 

// Package: BP_UI_CommunicateSettingFunctionLibrary

#include "Basic.hpp"

#include "BP_UI_CommunicateSettingFunctionLibrary_classes.hpp"
#include "BP_UI_CommunicateSettingFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetCommunicateSettingBgSettingImageSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        OutImageSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::GetCommunicateSettingBgSettingImageSize(class UObject* __WorldContext, struct FVector2D* OutImageSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "GetCommunicateSettingBgSettingImageSize");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutImageSize != nullptr)
		*OutImageSize = std::move(Parms.OutImageSize);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetBG
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                     InCanvasPanel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetSwitcher*                  WidgetSwitcher                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::SetBG(class UImage* Image, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel, class UTexture2DDynamic* Texture, class UWidgetSwitcher* WidgetSwitcher, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "SetBG");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_SetBG Parms{};

	Parms.Image = Image;
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InCanvasPanel = InCanvasPanel;
	Parms.Texture = Texture;
	Parms.WidgetSwitcher = WidgetSwitcher;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetClassType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InCurrentClassType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileClassListData      InClassListData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPlayerProfileClassList_C*        InPlayerProfileClassList                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommunicateSettingMenu_FaceBgData_C*InCommunicateSettingMenu_FaceBgData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           InAwardIdList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::SetClassType(ESBClassType InCurrentClassType, const struct FPlayerProfileClassListData& InClassListData, class UPlayerProfileClassList_C* InPlayerProfileClassList, class UCommunicateSettingMenu_FaceBgData_C* InCommunicateSettingMenu_FaceBgData, TArray<int32>& InAwardIdList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "SetClassType");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType Parms{};

	Parms.InCurrentClassType = InCurrentClassType;
	Parms.InClassListData = std::move(InClassListData);
	Parms.InPlayerProfileClassList = InPlayerProfileClassList;
	Parms.InCommunicateSettingMenu_FaceBgData = InCommunicateSettingMenu_FaceBgData;
	Parms.InAwardIdList = std::move(InAwardIdList);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InAwardIdList = std::move(Parms.InAwardIdList);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetClassLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            InClassType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InExp                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::GetClassLevel(const ESBClassType InClassType, const int32 InExp, class UObject* __WorldContext, int32* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "GetClassLevel");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel Parms{};

	Parms.InClassType = InClassType;
	Parms.InExp = InExp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.InitTenstionTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*                  _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           OutTensionTagIndex                                     (Parm, OutParm)

void UBP_UI_CommunicateSettingFunctionLibrary_C::InitTenstionTag(class UComboBoxString* _____, class UObject* __WorldContext, TArray<int32>* OutTensionTagIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "InitTenstionTag");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag Parms{};

	Parms._____ = _____;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTensionTagIndex != nullptr)
		*OutTensionTagIndex = std::move(Parms.OutTensionTagIndex);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.TextBoxChanged
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWidget*                          InLabelComment                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::TextBoxChanged(const class FText& InText, class UWidget* InLabelComment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "TextBoxChanged");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged Parms{};

	Parms.InText = std::move(InText);
	Parms.InLabelComment = InLabelComment;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetDecoFrameChange
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           InFrameWG                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::SetDecoFrameChange(int32 InItemID, class UImage* InFrameWG, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "SetDecoFrameChange");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange Parms{};

	Parms.InItemID = InItemID;
	Parms.InFrameWG = InFrameWG;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetFrameData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          InWG                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        TextureL                                               (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_CommunicateSettingFunctionLibrary_C::GetFrameData(int32 InItemID, class UWidget* InWG, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* TextureL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CommunicateSettingFunctionLibrary_C", "GetFrameData");

	Params::BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData Parms{};

	Parms.InItemID = InItemID;
	Parms.InWG = InWG;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TextureL != nullptr)
		*TextureL = Parms.TextureL;
}

}

