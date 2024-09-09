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
	 * BlueprintGeneratedClass BI_seqTrack.BI_seqTrack_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_seqTrack_C : public UInterface
	{
	public:
		void ANon(int32_t Test);
		void GetText(int32_t NewParam, class FString* NewParam1);
		void getSeqTrackInfoIndex(int32_t* NewParam1);
		void setSeqTrackInfoString(const class FString& NewParam, int32_t NewParam1);
		void NSonEnd();
		void NSonBegin();
		void NSonTick();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
