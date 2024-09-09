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
	 * WidgetBlueprintGeneratedClass RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C
	 * Size -> 0x004C (FullSize[0x02C4] - InheritedSize[0x0278])
	 */
	class URankingMenu_CategoryButtonList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        TextIdList;                                              // 0x0288(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class USBTextTableAsset*                                   TextTable;                                               // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class URankingMenu_CategoryButton_C*>               Buttons;                                                 // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    FocusButtonId;                                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ChangeFocusButton(int32_t ButtonId);
		void ExecuteUbergraph_RankingMenu_CategoryButtonList(int32_t EntryPoint);
		void OnClick__DelegateSignature(int32_t ButtonId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
