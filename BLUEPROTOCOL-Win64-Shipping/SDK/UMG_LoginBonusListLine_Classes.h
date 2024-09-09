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
	 * WidgetBlueprintGeneratedClass UMG_LoginBonusListLine.UMG_LoginBonusListLine_C
	 * Size -> 0x0064 (FullSize[0x02DC] - InheritedSize[0x0278])
	 */
	class UUMG_LoginBonusListLine_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUMG_LoginBonusListLineItem_C*                       Item1;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LoginBonusListLineItem_C*                       Item2;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LoginBonusListLineItem_C*                       Item3;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LoginBonusListLineItem_C*                       Item4;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LoginBonusListLineItem_C*                       Item5;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUMG_LoginBonusListLineItem_C*>               WidgetList;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             StumpAnimationFinish;                                    // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             IconClick;                                               // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ClickIndexBase;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCloseAnimationFinished();
		void ClearItemSelected();
		void PlayStumpAnimation(int32_t Index, bool* IsPlay);
		void GetWidget(int32_t Index, class UUMG_LoginBonusListLineItem_C** Widget);
		void SetData(int32_t Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Visibility, bool Stump, bool Click);
		void OnStumpAnimationFinish();
		void Initialize();
		void Finish();
		void OnIconClick(int32_t ID, class UUMG_LoginBonusListLineItem_C* SelectedItem);
		void ExecuteUbergraph_UMG_LoginBonusListLine(int32_t EntryPoint);
		void IconClick__DelegateSignature(int32_t Index, class UUMG_LoginBonusListLineItem_C* SelectedItem);
		void StumpAnimationFinish__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
