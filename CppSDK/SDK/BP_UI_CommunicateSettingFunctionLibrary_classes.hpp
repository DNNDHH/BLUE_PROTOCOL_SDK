#pragma once

 

// Package: BP_UI_CommunicateSettingFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UI_CommunicateSettingFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetCommunicateSettingBgSettingImageSize(class UObject* __WorldContext, struct FVector2D* OutImageSize);
	static void SetBG(class UImage* Image, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel, class UTexture2DDynamic* Texture, class UWidgetSwitcher* WidgetSwitcher, class UObject* __WorldContext);
	static void SetClassType(ESBClassType InCurrentClassType, const struct FPlayerProfileClassListData& InClassListData, class UPlayerProfileClassList_C* InPlayerProfileClassList, class UCommunicateSettingMenu_FaceBgData_C* InCommunicateSettingMenu_FaceBgData, TArray<int32>& InAwardIdList, class UObject* __WorldContext);
	static void GetClassLevel(const ESBClassType InClassType, const int32 InExp, class UObject* __WorldContext, int32* Level);
	static void InitTenstionTag(class UComboBoxString* _____, class UObject* __WorldContext, TArray<int32>* OutTensionTagIndex);
	static void TextBoxChanged(const class FText& InText, class UWidget* InLabelComment, class UObject* __WorldContext);
	static void SetDecoFrameChange(int32 InItemID, class UImage* InFrameWG, class UObject* __WorldContext);
	static void GetFrameData(int32 InItemID, class UWidget* InWG, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* TextureL);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_CommunicateSettingFunctionLibrary_C">();
	}
	static class UBP_UI_CommunicateSettingFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_CommunicateSettingFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UI_CommunicateSettingFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UI_CommunicateSettingFunctionLibrary_C");
static_assert(sizeof(UBP_UI_CommunicateSettingFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UI_CommunicateSettingFunctionLibrary_C");

}

