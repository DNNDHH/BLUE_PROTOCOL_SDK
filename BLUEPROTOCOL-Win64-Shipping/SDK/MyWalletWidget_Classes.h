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
	 * WidgetBlueprintGeneratedClass MyWalletWidget.MyWalletWidget_C
	 * Size -> 0x004C (FullSize[0x02C4] - InheritedSize[0x0278])
	 */
	class UMyWalletWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOut;                                                   // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCurrencyWidget_C*                                   Money;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        InactiveColor;                                           // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<bool>                                               bIsActive;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UCurrencyWidget_C*>                           CurrencyWidgets;                                         // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    ShowCount;                                               // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetBG();
		void GetCount(int32_t* ShowCount);
		void IsShow(bool* Result);
		void Hide();
		void Show();
		void SetActive(ECurrencyType InCurrencyType, bool bInActive);
		void PreConstruct_Internal(TArray<class UCurrencyWidget_C*>* Array);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_MyWalletWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
