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
	 * WidgetBlueprintGeneratedClass EnemyNamePlate.EnemyNamePlate_C
	 * Size -> 0x0058 (FullSize[0x0360] - InheritedSize[0x0308])
	 */
	class UEnemyNamePlate_C : public USBEnemyNamePlateWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBuffList_C*                                         BuffList;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPCurSize;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPPrevSize;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelLV;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelName;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                TextColorList;                                           // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetCharacter_Internal(class ASBCharacter* InCharacter);
		void IsShowBuddyIcon(bool* ShowBuddyIcon);
		void SetVisibleCanvas(bool IsVisible);
		void ResetBuffIcon();
		void SetName(const class FString& Name);
		void SetLevel(int32_t Level);
		void OnDisplayStart();
		void SetColorName(const struct FSlateColor& InColorAndOpacity);
		void SetColorLV(const struct FSlateColor& InColorAndOpacity);
		void SetColorText(int32_t Level);
		void SetupBuffIcon();
		void Unbind();
		void Bind();
		void BindUIVisibleSettingChange();
		void UnbindUIVisibleSettingChange();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Construct();
		void CustomEvent_1();
		void SetHpRate(float HPRate);
		void SetDepth(float InDepth);
		void Destruct();
		void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
		void ExecuteUbergraph_EnemyNamePlate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
