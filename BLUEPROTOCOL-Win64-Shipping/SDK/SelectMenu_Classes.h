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
	 * WidgetBlueprintGeneratedClass SelectMenu.SelectMenu_C
	 * Size -> 0x0035 (FullSize[0x02E5] - InheritedSize[0x02B0])
	 */
	class USelectMenu_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectItem;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UUserWidget*>                                 ItemList;                                                // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    CurrentItem;                                             // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAutoClose;                                              // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void Construct();
		void AddItemFromArray(TArray<class FText> ItemArray);
		void OnSelectMenuItem(class USelectMenuItem_C* SelectItem);
		void ChangeCurrentItem(int32_t CurrentItem);
		void SetCurrentItem(int32_t CurrentItem);
		void Show();
		void ProcSelectItem(int32_t SelectItemIndex);
		void Destruct();
		void Close();
		void AddItemFromStringArray(TArray<class FString> ItemArray);
		void AddItem(const class FText& item);
		void ExecuteUbergraph_SelectMenu(int32_t EntryPoint);
		void OnSelectItem__DelegateSignature(int32_t SelectItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
