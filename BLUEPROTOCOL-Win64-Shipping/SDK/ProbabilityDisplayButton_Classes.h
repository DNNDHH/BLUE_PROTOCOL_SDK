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
	 * WidgetBlueprintGeneratedClass ProbabilityDisplayButton.ProbabilityDisplayButton_C
	 * Size -> 0x0519 (FullSize[0x0791] - InheritedSize[0x0278])
	 */
	class UProbabilityDisplayButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn23_C*                                         CmnBtn23;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    TextId;                                                  // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_6WAR[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        BtnOnStyle;                                              // 0x02A0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnOffStyle;                                             // 0x0518(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSelected;                                              // 0x0790(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBtnSelected(bool bSelected);
		void Construct();
		void BndEvt__ProbabilityDisplayButton_CmnBtn23_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_ProbabilityDisplayButton(int32_t EntryPoint);
		void OnClick__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
