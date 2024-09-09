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
	 * WidgetBlueprintGeneratedClass SortBox.SortBox_C
	 * Size -> 0x0089 (FullSize[0x0301] - InheritedSize[0x0278])
	 */
	class USortBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBComboBox_C*                                       Cmb_Drop;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<ESBItemSortType>                                    SortType;                                                // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBItemSortType>                       SortText;                                                // 0x0298(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSelectSortType;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESBSortFilterSaveType                                      SaveType;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESortTypeCategory                                          SortTypeCategory;                                        // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_5TFD[0x2];                                   // 0x02FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CBoxWidth;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGenerating;                                             // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetSelectedSortType(ESBItemSortType InSortType);
		void SetSortType(ESBSortFilterSaveType SaveType, ESortTypeCategory SortTypeCategory);
		void GetSortTextId(ESBItemSortType SortType, int32_t* TextId);
		void LoadOptions();
		void GenerateOptions();
		void RemoveOption(ESBItemSortType InOptionType);
		void GetSortType(ESBItemSortType* OutSortType);
		class UWidget* On_Cmb_Drop_GenerateWidget_1(const class FString& item);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_SortBox(int32_t EntryPoint);
		void OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
