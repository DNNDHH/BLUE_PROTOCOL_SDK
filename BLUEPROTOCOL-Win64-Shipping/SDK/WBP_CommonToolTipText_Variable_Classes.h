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
	 * WidgetBlueprintGeneratedClass WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C
	 * Size -> 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
	 */
	class UWBP_CommonToolTipText_Variable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 Label_Description;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ToolTipDetailsDateTime_C*                       WBP_ToolTipDetailsDateTime;                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime);
		void SetAdventureBoardBosstDateTime(bool InLimited, const struct FDateTime& InDateTime);
		void SetRecipeDateTime(const struct FDateTime& DateTime);
		void SetWeaponSkin(int32_t InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime);
		void SetEmotion(const class FName& InId);
		void SetText(const class FText& InText);
		void SetTextAndDateTime(const class FText& Text, const struct FDateTime& DateTime, bool bHideIfMinValue);
		void SetLimitTimer(const struct FDateTime& InDateTime);
		void ExecuteUbergraph_WBP_CommonToolTipText_Variable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
