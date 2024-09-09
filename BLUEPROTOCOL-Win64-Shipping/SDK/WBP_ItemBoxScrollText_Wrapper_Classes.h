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
	 * WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C
	 * Size -> 0x0034 (FullSize[0x02AC] - InheritedSize[0x0278])
	 */
	class UWBP_ItemBoxScrollText_Wrapper_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ItemBoxScrollText_Bag_C*                        WBP_Bag;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ItemBoxScrollText_Destination_C*                WBP_Destination;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ItemBoxScrollText_ItemStorage_C*                WBP_ItemStorage;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ItemBoxScrollText_OtherOne_C*                   WBP_Text_Other;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_34;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ViewType;                                                // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTypeOtherMultiple(const class FText& InNameText, const class FText& InNumText, bool bOverlapping);
		void SetTypeOtherOne(const class FText& InNameText, bool bOverlapping);
		void SetBagRange_Random(int32_t NowNum, int32_t MaxNum, int32_t MaxAdd);
		void SetBagRange(int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMax, int32_t ExpectationNamMin);
		void SetBagSingle(int32_t NowNum, int32_t MaxNum, int32_t ExpectationNam);
		void SetItemStorageRange(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMin, int32_t ExpectationNamMax, bool bCanNotLost);
		void SetItemStorageSingle(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t ExpectationNam, bool bCanNotLost);
		void SetDestination(const class FText& InText, int32_t Index, bool Over, const class FText& OverText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
