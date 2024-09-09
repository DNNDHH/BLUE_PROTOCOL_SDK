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
	 * WidgetBlueprintGeneratedClass Filter_AdventureBoard.Filter_AdventureBoard_C
	 * Size -> 0x0050 (FullSize[0x02D8] - InheritedSize[0x0288])
	 */
	class UFilter_AdventureBoard_C : public USBItemFilterWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        FilterBG_VerticalBox;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterRadioButtons_C*                               FilterRadioButtons;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FFilterRadioButtonData>                      BuuttonPreset;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ClassFilterStartIndex;                                   // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W0T6[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESBClassType>                                       ClassTypeList;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBClassType>                                       ClassTypeList_1;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsFilterActive(int32_t InIndex, bool* IsActive);
		void CreateFilterList();
		void Construct();
		void BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32_t Index);
		void ResetAll();
		void ExecuteUbergraph_Filter_AdventureBoard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
