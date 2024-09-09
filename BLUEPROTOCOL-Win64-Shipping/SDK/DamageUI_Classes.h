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
	 * WidgetBlueprintGeneratedClass DamageUI.DamageUI_C
	 * Size -> 0x0058 (FullSize[0x0308] - InheritedSize[0x02B0])
	 */
	class UDamageUI_C : public USBDamageUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOutScale;                                              // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InOut;                                                   // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Numbers;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FDamageUI_NumberData>                        NumberData_Enemy;                                        // 0x02D8(0x0010) Edit, BlueprintVisible
		TArray<struct FDamageUI_NumberData>                        NumberData_Player;                                       // 0x02E8(0x0010) Edit, BlueprintVisible
		TArray<struct FDamageUI_DamageCorrectionIconData>          DamageCorrectionIconInfos;                               // 0x02F8(0x0010) Edit, BlueprintVisible

	public:
		void SetBorderAlignment();
		void PlayAnim();
		void SetDamageCorrectionIcon();
		void SetNumber();
		void SetMiss();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindUIVisibleSettingDelegate();
		void UnbindUIVisibleSettingDelegate();
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void Destruct();
		void ExecuteUbergraph_DamageUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
