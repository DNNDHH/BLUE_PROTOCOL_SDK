#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UI_CommunicateSettingFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CheckAvailableTensionTag(ESBTensionTagType TargetTag, class UObject* __WorldContext, bool* IsAvailable);
		void GetFrameData(int32_t InItemID, class UWidget* InWG, class UObject* __WorldContext);
		void SetDecoFrameChange(int32_t InItemID, class UImage* InFrameWG, class UObject* __WorldContext);
		void TextBoxChanged(const class FText& InText, class UWidget* InLabelComment, class UObject* __WorldContext);
		void InitTenstionTag(class UComboBoxString* , class UObject* __WorldContext, TArray<int32_t>* outTensionTagIndex);
		void GetClassLevel(ESBClassType InClassType, int32_t InExp, class UObject* __WorldContext, int32_t* Level);
		void SetClassType(ESBClassType InCurrentClassType, const struct FPlayerProfileClassListData& InClassListData, class UPlayerProfileClassList_C* InPlayerProfileClassList, class UCommunicateSettingMenu_FaceBgData_C* InCommunicateSettingMenu_FaceBgData, TArray<int32_t>* InAwardIdList, class UObject* __WorldContext);
		void SetBG(class UImage* Image, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel, class UTexture2DDynamic* Texture, class UWidgetSwitcher* WidgetSwitcher, class UObject* __WorldContext);
		void GetCommunicateSettingBgSettingImageSize(class UObject* __WorldContext, struct FVector2D* OutImageSize);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
