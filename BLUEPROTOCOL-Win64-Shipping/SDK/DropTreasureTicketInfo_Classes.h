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
	 * WidgetBlueprintGeneratedClass DropTreasureTicketInfo.DropTreasureTicketInfo_C
	 * Size -> 0x0034 (FullSize[0x02AC] - InheritedSize[0x0278])
	 */
	class UDropTreasureTicketInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Box_Mask;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_TreasureBox;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageSeparation;                                         // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_TicketValue;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CommonToolTipDetail_Fixed_C*                    ToolTip;                                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefineTicketId;                                          // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTicketState(bool State);
		void SetTicketState_Category(EMatchingMenuListCategory Category);
		void SetTicketState_GameMode(const class FString& GameMode);
		void UpdateValue();
		void GetCountValueLimit(int32_t* CountValueLimit);
		void SetupToolTip();
		class UWidget* Get_ImageSeparation_ToolTipWidget_1();
		class UWidget* Get_ImageTicketIcon_ToolTipWidget_1();
		void SetColorRedIfZero(class UTextBlock* Text, int32_t Value);
		void SetTicketValue();
		void Construct();
		void ExecuteUbergraph_DropTreasureTicketInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
